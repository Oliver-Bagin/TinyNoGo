import os
import re
import glob
import matplotlib.pyplot as plt
from matplotlib.patches import Patch

def to_intervals(events):
    """
    Given a list of (time, name) tuples sorted by time,
    collapse each run event into an interval that lasts
    until the next run of a different process.
    """
    if len(events) < 2:
        return []
    intervals = []
    # Create (start, end, name) for each event until the next event
    for (t0, name0), (t1, _) in zip(events, events[1:]):
        intervals.append((t0, t1, name0))
    
    # 4.5) Merge adjacent intervals of the same process
    merged = []
    for start, end, proc in intervals:
        if merged and merged[-1][2] == proc:
            # extend the previous interval's end
            merged[-1] = (merged[-1][0], end, proc)
        else:
            merged.append((start, end, proc))
    intervals = merged

    return intervals

# Fixed width for each interval to make spacing clear
INTERVAL_WIDTH = 1.0

def to_virtual_intervals(events):
    """
    Convert events to virtual (evenly spaced) intervals.
    Each run by a process gets the same width and is shifted to a virtual timeline.
    """
    if len(events) < 2:
        return []

    intervals = []
    virtual_time = 0.0

    for (name0, _), (name1, _) in zip(events, events[1:]):
        intervals.append((virtual_time, virtual_time + INTERVAL_WIDTH, name0))
        virtual_time += INTERVAL_WIDTH

    # Merge adjacent intervals of the same process
    merged = []
    for start, end, proc in intervals:
        if merged and merged[-1][2] == proc:
            merged[-1] = (merged[-1][0], end, proc)
        else:
            merged.append((start, end, proc))

    return merged

def process_dump_file(dump_file):
    import re
    import os
    import matplotlib.pyplot as plt
    from matplotlib.patches import Patch

    def to_intervals(events):
        # Dummy placeholder for actual logic
        # Replace this with your real interval builder
        return [(events[i][0], events[i+1][0], events[i][1]) for i in range(len(events)-1)]

    # 1) Read and filter only "run" events (drop "Unregistered") and timestamps > 60.0s
    event_pattern = re.compile(r"\*\s+run:\s+(\w+)\s+([\d.]+)\s*s")
    events = []
    with open(dump_file) as f:
        for line in f:
            m = event_pattern.match(line.strip())
            if m:
                proc, t = m.groups()
                t = float(t)
                if proc != "Unregistered" and t <= 60.0:
                    events.append((t, proc))

    if len(events) < 2:
        print(f"⚠️ Skipping {dump_file} (not enough events)")
        return

    # 2) Sort by time
    events.sort(key=lambda x: x[0])

    # 3) Map each process to a unique ID (1,2,3,…)
    processes = sorted({p for _, p in events})
    proc_to_id = {p: i+1 for i, p in enumerate(processes)}

    # 4) Build simple intervals directly
    intervals = to_intervals(events)

    # 5) Build the step data
    times, ys = [], []
    for start, end, proc in intervals:
        pid = proc_to_id[proc]
        times.extend([start, end])
        ys.extend([pid, pid])

    # 7) Plot
    max_time = max(times)
    fig, ax = plt.subplots(figsize=(18, len(processes) * 1.5))
    fig.subplots_adjust(top=0.88)

    ax.step(times, ys, where="post", lw=2)
    ax.set_yticks(list(proc_to_id.values()))
    ax.set_ylabel("Process ID")
    ax.set_xlabel("Time (s)")
    ax.set_title(f"Scheduler Interleaving: {os.path.basename(dump_file)}")
    ax.grid(True, axis="x", linestyle="--", alpha=0.5)
    ax.set_xlim(0, max_time)

    # 8) Add a "Process Key" legend
    handles = [
        Patch(facecolor="none", edgecolor="none", label=f"{pid}: {proc}")
        for proc, pid in proc_to_id.items()
    ]
    ax.legend(handles=handles, title="Process Key", loc="upper right",
              frameon=False, handlelength=0, handletextpad=0.5)

    # 9) Save the figure
    out_path = dump_file.replace(".schedular.dump", ".sched.png")
    plt.tight_layout()
    plt.savefig(out_path, dpi=300)
    plt.close()
    print(f"✅ Saved: {out_path}")



def main():
    dump_files = glob.glob("./program*/out/*.schedular.dump")
    if not dump_files:
        print("❌ No .schedular.dump files found.")
        return
    for dump_file in dump_files:
        process_dump_file(dump_file)

if __name__ == "__main__":
    main()