export memory memory(initial: 2, max: 0);

global stack_pointer:int = 65536;
global g_b:int = 0;
global g_c:int = 0;

table T_a:funcref(min: 3, max: 3);

data rodata(offset: 65536) =
  "expand 32-byte kElemKeyFieldChanDir\00\00meta\00\00\00z\00\00\00\14\0a"
  "\01\00T\00\01\00\cb\00\01\00reflectlite.ValueError\00\00Z\00\00\00x\00"
  "\01\00\cb\00\01\00\0c\00\00\00\02\00\00\00\b0\08\01\00\e4\01\01\00\c0\08"
  "\01\00\ef\00\01\00\d5\00\00\00T\00\01\00reflect\00errors\00io/fs\00\04"
  "\10Err\00\04\10LayoutElem\00\04\18ValueElem\00syscall\00\04\08Path\00\04"
  "\08Value\00internal/reflectlite\00time\00\04 Message\00\04\08Kind\00in"
  "validboolintint8int16int32int64uintuint8uint16uint32uint64uintptrfloat"
  "32float64complex64complex128stringunsafe.Pointerchaninterfaceptrslicea"
  "rrayfuncmapstruct\00\00\00z\00\00\00\04\0a\01\00\c0\01\01\00\cb\00\01\00"
  "reflectlite.TypeError\00\00\00Z\00\00\00\dc\01\01\00\cb\00\01\00\08\00"
  "\00\00\01\00\00\00\b0\08\01\00\e4\01\01\00\d5\00\00\00\c0\01\01\00\04\00"
  "Method\00chan<- <-chan chan ()chan *[]struct {}interface {}reflect: fi"
  "eld index out of range\1f\02\01\00!\00\00\00reflect: call of reflect.T"
  "ype. on invalid typereflect: call of  on zero Value\00\00\00z\00\00\00"
  "\ec\09\01\00\bc\02\01\00\88\00\01\00errors.errorString\00\00Z\00\00\00"
  "\d8\02\01\00\88\00\01\00\08\00\00\00\01\00\00\00\b0\08\01\00\e0\02\01\00"
  "\d5\00\00\00\bc\02\01\00\00\00s\00sync: unlock of unlocked Mutex\00\00"
  "\00\00\00\00\e4\02\01\00\1e\00\00\00free: invalid pointer\00\00\00\10\03"
  "\01\00\15\00\00\00realloc: invalid pointer0\03\01\00\18\00\00\00panic:"
  " panic: runtime error: nil pointer dereferenceassignment to entry in n"
  "il mapindex out of rangeslice out of rangeunsafe.Slice/String: len out"
  " of rangetruefalseScheduler\0d\00RawType\00\00\c3\00\00\00\10\04\01\00"
  "\d5\00\00\00\08\04\01\00\c4\00\00\00 \04\01\00\d5\00\00\00\18\04\01\00"
  "\c7\00\00\000\04\01\00\d5\00\00\00(\04\01\00\c9\00\00\00@\04\01\00\d5\00"
  "\00\008\04\01\00\88\04\01\00\03";
data rodata_1(offset: 66696) =
  "UTC\00z\00\00\00T\0a\01\00\ac\04\01\00\e0\00\01\00time.ParseError\00Z\00"
  "\00\00\e8\04\01\00\e0\00\01\00(\00\00\00\05\00\00\00\b0\08\01\00\f0\04"
  "\01\00\b0\08\01\00\c3\00\01\00\b0\08\01\00\9b\00\01\00\b0\08\01\00\a8\00"
  "\01\00\b0\08\01\00\e5\00\01\00\d5\00\00\00\ac\04\01\00\04\00Layout\00\00"
  "\00wall\00\00\08ext\00\00\10loc\00\00\08zone\00\00\00name\00\00\08offs"
  "et\00\00\0cisDST\00\00\14tx\00\00\00when\00\00\08index\00\00\09isstd\00"
  "\00\0aisutc\00\00 extend\00\00(cacheStart\00\000cacheEnd\00\008cacheZo"
  "ne\00LocaldalTLDpSugct?\04\00Op\00\00\cc\00\00\00\9c\05\01\00\d5\00\00"
  "\00\94\05\01\00z\00\00\00,\0a\01\00\c4\05\01\00\8f\00\01\00fs.PathErro"
  "r\00\00\00\00Z\00\00\00\f0\05\01\00\8f\00\01\00\18\00\00\00\03\00\00\00"
  "\b0\08\01\00\8e\05\01\00\b0\08\01\00\bc\00\01\00`\08\01\00\95\00\01\00"
  "\d5\00\00\00\c4\05\01\00\ca\00\00\00\00\06\01\00\d5\00\00\00\f8\05\01\00"
  "\c6\00\00\00\10\06\01\00\d5\00\00\00\08\06\01\00\da\00\00\00D\06\01\00"
  "\e0\00\01\00\18\00\00\00\03\00\00\00\a0\08\01\00\f9\04\01\00\08\06\01\00"
  "\00\05\01\00L\0a\01\00\06\05\01\00\d5\00\00\00\18\06\01\00:\00\00\00L\0a"
  "\01\00l\06\01\00\e0\00\01\00time.Location\00\00\00\1a\00\00\00\b8\06\01"
  "\00\e0\00\01\00@\00\00\00\07\00\00\00\b0\08\01\00\13\05\01\00\c0\06\01"
  "\00\0c\05\01\00,\07\01\00+\05\01\00\b0\08\01\00O\05\01\00\08\06\01\00X"
  "\05\01\00\08\06\01\00e\05\01\00\f0\06\01\00p\05\01\00\d5\00\00\00l\06\01"
  "\00\16\00\00\00\cc\06\01\00\d4\06\01\00\d5\00\00\00\c0\06\01\00z\00\00"
  "\00\f0\06\01\00\f8\06\01\00\e0\00\01\00time.zone\00\00\00\d5\00\00\00\d4"
  "\06\01\00Z\00\00\00$\07\01\00\e0\00\01\00\10\00\00\00\03\00\00\00\b0\08"
  "\01\00\13\05\01\00P\08\01\00\1a\05\01\00@\08\01\00#\05\01\00\d5\00\00\00"
  "\f8\06\01\00\16\00\00\008\07\01\00@\07\01\00\d5\00\00\00,\07\01\00\fa\00"
  "\00\00`\07\01\00h\07\01\00\e0\00\01\00time.zoneTrans\00\00\d5\00\00\00"
  "@\07\01\00\da\00\00\00\9c\07\01\00\e0\00\01\00\10\00\00\00\04\00\00\00"
  "\08\06\01\000\05\01\00\a4\07\01\007\05\01\00@\08\01\00?\05\01\00@\08\01"
  "\00G\05\01\00\d5\00\00\00h\07\01\00\c8\00\00\00\ac\07\01\00\d5\00\00\00"
  "\a4\07\01\00\0d\00Value\00Z\00\00\00\e8\07\01\00\cb\00\01\00\0c\00\00\00"
  "\03\00\00\00\fc\09\01\00\f0\07\01\00(\08\01\00 \08\01\00,\09\01\008\08"
  "\01\00\d5\00\00\00\bc\07\01\00\00\00typecode\00\00\da\00\00\00\18\08\01"
  "\00\cb\00\01\00\01\00\00\00\01\00\00\00\a4\07\01\00#\00\01\00\d5\00\00"
  "\00\fc\07\01\00\00\04value\00R\00\00\000\08\01\00\d5\00\00\00(\08\01\00"
  "\00\08flags\00\c1\00\00\00H\08\01\00\d5\00\00\00@\08\01\00\c2\00\00\00"
  "X\08\01\00\d5\00\00\00P\08\01\00t\00\01\00x\08\01\00\80\08\01\00\f5\00"
  "\01\00.error\00\00\d5\00\00\00`\08\01\00T\00\00\00\88\08\01\00\d5\00\00"
  "\00\80\08\01\00\c5\00\00\00\98\08\01\00\d5\00\00\00\90\08\01\00\cb\00\00"
  "\00\a8\08\01\00\d5\00\00\00\a0\08\01\00Q\00\00\00\b8\08\01\00\d5\00\00"
  "\00\b0\08\01\00\e8\00\01\00\f4\09\01\00\a4\07\01\00\cb\00\01\00reflect"
  "lite.Kind\00\00\00\00\fa\00\04\00\fc\09\01\00\fc\07\01\00\cb\00\01\00r"
  "eflectlite.RawType\00z\00F\00\0c\0a\01\00\bc\07\01\00\cb\00\01\00refle"
  "ctlite.Value\00\00\00\e8\00\00\00\1c\0a\01\00\a4\07\01\00\cb\00\01\00r"
  "eflectlite.valueFlags\00\00\ea\00\05\00$\0a\01\00\f8\05\01\00\8f\00\01"
  "\00fs.FileMode\00z\00J\004\0a\01\00\90\0a\01\00\80\00\01\00reflect.Val"
  "ue\00\00\00\fa\00\04\00<\0a\01\00t\0a\01\00\80\00\01\00reflect.rawType"
  "\00\ec\00\04\00D\0a\01\00\94\05\01\00\b4\00\01\00syscall.Errno\00\00\00"
  "\fa\00+\00\5c\0a\01\00\18\06\01\00\e0\00\01\00time.Time\00\00\00\d5\00"
  "\01\00\98\02\01\00\d5\00\01\00\c0\08\01\00\d5\00\19\00\e4\08\01\00\d5\00"
  "\01\00\98\01\01\00\d5\00F\00\08\09\01\00\d5\00\01\00,\00\01\00\d5\00\00"
  "\00,\09\01\00\d5\00\05\00T\09\01\00\d5\00\03\00\a4\05\01\00\d5\00J\00p"
  "\09\01\00\d5\00#\00\90\09\01\00\d5\00\04\00\b0\09\01\00\d5\00\01\00L\06"
  "\01\00\d5\00\01\00\8c\04\01\00\d5\00/\00\d0\09\01\00\d5\00\19\00t\0a\01"
  "\00\d5\00F\00\90\0a\01\00\da\00\04\00d\0a\01\00\80\00\01\00\01\00\00\00"
  "\01\00\00\00\e4\08\01\00\fd\03\01\00Z\00F\00l\0a\01\00\80\00\01\00\0c\00"
  "\00\00\01\00\00\00\08\09\01\00\b4\07\01";
data data(offset: 68268) =
  "0\0d\01\00\00\00\00\00\b8\0d\01\00\c1\82\01\00\00\00\00\00\04\00\00\00"
  "\0c\00\00\00\01\00\00\00\00\00\00\00\01\00\00\00\00\00\00\00\02\00\00\00"
  "\10\00\01\00\04\00\00\00\14\00\01\00\03\00\00\00\17\00\01\00\05\00\00\00"
  "\1c\00\01\00\07";

import function runtime_fd_write(a:int, b:int, c:int, d:int):int; // func0

import function imported_wasi_snapshot_preview1_random_get(a:int, b:int):int; // func1

function wasi_random_get(a:int, b:{ a:int, b:int }):int { // func2
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        imported_wasi_snapshot_preview1_random_get(a, b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        a = t0;
      }
      if (eqz(g_b)) { return a & 65535 }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function getentropy(a:int, b:int):int { // func3
  var e:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    c = c.c;
  }
  var d:{ a:int, b:int, c:int } = {
                                    if (g_b == 2) {
                                      g_c[0]:int = g_c[0]:int - 4;
                                      e = (g_c[0]:int)[0]:int;
                                    }
                                    if (if (g_b) {
                                          0
                                        } else {
                                          c = 29;
                                          b > 256;
                                        } &
                                        eqz(g_b)) goto B_d;
                                    if (eqz(g_b) | eqz(e)) {
                                      wasi_random_get(a, b);
                                      let t0 = 0;
                                      if (g_b == 1) goto B_b;
                                      c = t0;
                                    }
                                    if (eqz(g_b)) {
                                      if (c) goto B_d;
                                      return 0;
                                    }
                                    label B_d:
                                    if (eqz(g_b)) {
                                      68352[0]:int = c;
                                      return -1;
                                    }
                                    unreachable;
                                    label B_b:
                                  }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
  return 0;
}

function memcpy(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:int):int { // func4
  var d:int;
  var f:int;
  var e:int;
  var g:int;
  e = {
        if (c <= 32) {
          if (eqz(b & 3) | eqz(c)) goto B_c;
          a.a = b[0]:ubyte;
          e = a + 1;
          e;
          if (eqz((d = b + 1) & 3) | eqz(f = c - 1)) goto B_b;
          a.b = b[1]:ubyte;
          e = a + 2;
          e;
          if (eqz((d = b + 2) & 3) | eqz(f = c - 2)) goto B_b;
          a.c = b[2]:ubyte;
          e = a + 3;
          e;
          if (eqz((d = b + 3) & 3) | eqz(f = c - 3)) goto B_b;
          a.d = b[3]:ubyte;
          f = c - 4;
          d = b + 4;
          a + 4;
          goto B_b;
        }
        memory_copy(a, b, c);
        return a;
        label B_c:
        f = c;
        d = b;
        a;
        label B_b:
      }
  c = e & 3;
  if (eqz(c)) {
    if (f < 16) {
      c = f;
      goto B_f;
    }
    c = f - 16;
    if (eqz(c & 16)) {
      e[0]:long@4 = d[0]:long@4;
      e[2]:long@4 = d[2]:long@4;
      e = e + 16;
      f = c;
      d = d + 16;
    }
    if (c < 16) goto B_f;
    c = f;
    loop L_i {
      e[0]:long@4 = d[0]:long@4;
      e[2]:long@4 = d[2]:long@4;
      e[4]:long@4 = d[4]:long@4;
      e[6]:long@4 = d[6]:long@4;
      e = e + 32;
      d = d + 32;
      c = c - 32;
      if (c > 15) continue L_i;
    }
    label B_f:
    if (c >= 8) {
      e[0]:long@4 = d[0]:long@4;
      e = e + 8;
      d = d + 8;
    }
    if (c & 4) {
      e[0]:int = d[0]:int;
      e = e + 4;
      d = d + 4;
    }
    if (c & 2) {
      e[0]:short@1 = d[0]:ushort@1;
      e = e + 2;
      d = d + 2;
    }
    if (eqz(c & 1)) goto B_a;
    e[0]:byte = d[0]:ubyte;
    return a;
  }
  c = {
        if (f >= 32) {
          e[0]:byte = (f = d[0]:int);
          br_table[B_s, B_r, ..B_p](c - 2)
          label B_s:
          e[1]:byte = f >> 8;
          e[6@4]:long@4 = (d + 6)[0]:long@2;
          e[2@4]:int = d[1]:int << 16 | f >> 16;
          b = d + 18;
          g = 14;
          d = (d + 14)[0]:int@2;
          f = 14;
          e + 18;
          goto B_o;
          label B_r:
          e[5@4]:long@4 = (d + 5)[0]:long@1;
          e[1@4]:int = d[1]:int << 24 | f >> 8;
          b = d + 17;
          g = 13;
          d = (d + 13)[0]:int@1;
          f = 15;
          e + 17;
          goto B_o;
        }
        b = {
              if (f < 16) {
                c = e;
                d;
                goto B_t;
              }
              e[0]:byte = d[0]:ubyte;
              e[1]:int@1 = d[1]:int@1;
              e[5]:long@1 = d[5]:long@1;
              e[13]:short@1 = d[13]:ushort@1;
              e[15]:byte = d[15]:ubyte;
              c = e + 16;
              d + 16;
              label B_t:
            }
        if (f & 8) goto B_n;
        goto B_m;
        label B_p:
        e[2]:byte = f >> 16;
        e[1]:byte = f >> 8;
        e[7@4]:long@4 = (d + 7)[0]:long@1;
        e[3@4]:int = d[1]:int << 8 | f >> 24;
        b = d + 19;
        g = 15;
        d = (d + 15)[0]:int@1;
        f = 13;
        e + 19;
        label B_o:
      }
  (e + g)[0]:int = d;
  label B_n:
  c[0]:long@1 = b[0]:long@1;
  c = c + 8;
  b = b + 8;
  label B_m:
  if (f & 4) {
    c[0]:int@1 = b[0]:int@1;
    c = c + 4;
    b = b + 4;
  }
  if (f & 2) {
    c[0]:short@1 = b[0]:ushort@1;
    c = c + 2;
    b = b + 2;
  }
  if (eqz(f & 1)) goto B_a;
  c[0]:byte = b[0]:ubyte;
  label B_a:
  return a;
}

function memset(a:{ a:byte, b:byte, c:byte, d:byte }, b:int, c:{ a:long, b:long, c:long, d:long }):int { // func5
  var g:int;
  if (c >= 33) {
    memory_fill(a, b, c);
    return a;
  }
  if (eqz(c)) goto B_b;
  a.a = b;
  var d:int = a + c;
  (d - 1)[0]:byte = b;
  if (c < 3) goto B_b;
  a.c = b;
  a.b = b;
  (d - 3)[0]:byte = b;
  (d - 2)[0]:byte = b;
  if (c < 7) goto B_b;
  a.d = b;
  (d - 4)[0]:byte = b;
  if (c < 9) goto B_b;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int } = 
    a + (g = 0 - a & 3);
  e.a = (d = (b & 255) * 16843009);
  c = e + (b = c - g & 60);
  (c - 4)[0]:int = d;
  if (b < 9) goto B_b;
  e.c = d;
  e.b = d;
  (c - 8)[0]:int = d;
  (c - 12)[0]:int = d;
  if (b < 25) goto B_b;
  e.g = d;
  e.f = d;
  e.e = d;
  e.d = d;
  (c - 16)[0]:int = d;
  (c - 20)[0]:int = d;
  (c - 24)[0]:int = d;
  (c - 28)[0]:int = d;
  b = b - (c = (e & 4) | 24);
  if (b < 32) goto B_b;
  var f:long = i64_extend_i32_u(d) * 4294967297L;
  c = c + e;
  loop L_c {
    c.d = f;
    c.c = f;
    c.b = f;
    c.a = f;
    c = c + 32;
    b = b - 32;
    if (b > 31) continue L_c;
  }
  label B_b:
  return a;
}

function arc4random_buf(a:int, b:{ a:int, b:int }) { // func6
  var c:int;
  var e:int;
  var d:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (select_if(g_b, 1, if (g_b) { 0 } else { 68356[0]:int })) {
          if (eqz(g_b) | eqz(c)) {
            getentropy(68364, 32);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) { 68356[0]:long@4 = 2199023255553L }
        }
        if (eqz(g_b)) {
          if (eqz(b)) goto B_i;
          c = 68360[0]:int;
          loop L_j {
            if (c == 512) {
              if (b >= 512) {
                loop L_m {
                  chacha20_rng(a + e, 68364);
                  e = e + 512;
                  b = b - 512;
                  if (b > 511) continue L_m;
                }
              }
              if (eqz(b)) goto B_i;
              chacha20_rng(68396, 68364);
              68360[0]:int = 0;
              c = 0;
            }
            var f:int = c + 68396;
            d = 512 - c;
            c = d > b;
            memcpy(a + e, f, d = select_if(b, d, c));
            memset(68360[0]:int + 68396, 0, d);
            68360[0]:int = (c = 68360[0]:int + d);
            e = d + e;
            b = b - d;
            if (b) continue L_j;
          }
          label B_i:
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function chacha20_rng(a:long_ptr@1, b:long_ptr@1) { // func7
  var d:long_ptr@1;
  var e:long_ptr@1;
  var f:long_ptr@1;
  var c:long_ptr = stack_pointer + -64;
  stack_pointer = c;
  (c + 56)[0]:long = 0L;
  (c + 24)[0]:long = (d = b + 8)[0];
  (c + 32)[0]:long = (e = b + 16)[0];
  (c + 40)[0]:long = (f = b + 24)[0];
  c[6] = 0L;
  c[1] = rodata[1]:long;
  c[0] = rodata[0]:long;
  c[2] = b[0];
  chacha20_update(a, c);
  f[0] = (a + 24)[0]:long@1;
  e[0] = (a + 16)[0]:long@1;
  d[0] = (a + 8)[0]:long@1;
  b[0] = a[0];
  chacha20_update(a, c);
  chacha20_update(a - -64, c);
  chacha20_update(a + 128, c);
  chacha20_update(a + 192, c);
  chacha20_update(a + 256, c);
  chacha20_update(a + 320, c);
  chacha20_update(a + 384, c);
  chacha20_update(a + 448, c);
  stack_pointer = c - -64;
}

function chacha20_update(a:int_ptr@1, b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int }) { // func8
  var ka:int;
  var la:int;
  var s:int = -2;
  var t:int = b.e;
  var c:int = t;
  var u:int = b.a;
  var g:int = u;
  var v:int = b.m;
  var h:int = v;
  var w:int = b.i;
  var i:int = w;
  var x:int = b.f;
  var d:int = x;
  var y:int = b.b;
  var j:int = y;
  var z:int = b.n;
  var k:int = z;
  var aa:int = b.j;
  var p:int = aa;
  var ba:int = b.g;
  var e:int = ba;
  var ca:int = b.c;
  var l:int = ca;
  var da:int = b.o;
  var q:int = da;
  var ea:int = b.k;
  var m:int = ea;
  var fa:int = b.h;
  var f:int = fa;
  var ga:int = b.d;
  var r:int = ga;
  var ha:int = b.p;
  var n:int = ha;
  var ia:int = b.l;
  var o:int = ia;
  loop L_a {
    n = (n ^ (r = f + r)) << 16;
    o = n + o;
    f = (o ^ f) << 12;
    var ja:int = f + r;
    r = 
      ja +
      (c = 
         ((i = 
             (h = 
                ((g = (c = ((i = (h = (h ^ (g = c + g)) << 16) + i) ^ c) << 12) + g) ^
                 h) <<
                8) +
             i) ^
          c) <<
         7);
    q = 
      (r ^
       (ka = 
          ((l = (e = ((m = (q = (q ^ (l = e + l)) << 16) + m) ^ e) << 12) + l) ^
           q) <<
          8)) <<
      16;
    p = 
      q +
      (la = 
         (k = 
            ((j = (d = ((p = (k = (k ^ (j = d + j)) << 16) + p) ^ d) << 12) + j) ^
             k) <<
            8) +
         p);
    c = (p ^ c) << 12;
    r = c + r;
    q = (r ^ q) << 8;
    p = q + p;
    c = (p ^ c) << 7;
    n = (n ^ ja) << 8;
    o = n + o;
    f = (o ^ f) << 7;
    l = f + l;
    k = (l ^ k) << 16;
    i = k + i;
    f = (i ^ f) << 12;
    l = f + l;
    k = (l ^ k) << 8;
    i = k + i;
    f = (i ^ f) << 7;
    m = m + ka;
    e = (m ^ e) << 7;
    j = e + j;
    h = (j ^ h) << 16;
    o = h + o;
    e = (o ^ e) << 12;
    j = e + j;
    h = (j ^ h) << 8;
    o = h + o;
    e = (o ^ e) << 7;
    n = (n ^ (g = (d = (d ^ la) << 7) + g)) << 16;
    m = n + m;
    d = (m ^ d) << 12;
    g = d + g;
    n = (g ^ n) << 8;
    m = n + m;
    d = (m ^ d) << 7;
    s = s + 2;
    if (s < 18) continue L_a;
  }
  b.m = h;
  b.a = g;
  b.e = c;
  b.i = i;
  b.f = d;
  b.n = k;
  b.b = j;
  b.j = p;
  b.g = e;
  b.o = q;
  b.c = l;
  b.k = m;
  b.h = f;
  b.p = n;
  b.d = r;
  b.l = o;
  a[60] = n + ha;
  a[56] = q + da;
  a[52] = k + z;
  a[48] = h + v;
  a[44] = o + ia;
  a[40] = m + ea;
  a[36] = p + aa;
  a[32] = i + w;
  a[28] = f + fa;
  a[24] = e + ba;
  a[20] = d + x;
  a[16] = c + t;
  a[12] = r + ga;
  a[8] = l + ca;
  a[4] = j + y;
  a[0] = g + u;
  b.m = b.m + 1;
}

function arc4random():int { // func9
  var a:int_ptr;
  var c:{ a:int, b:int }
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    a = g_c[0]:int;
    b = a[0];
    a = a[1];
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          a = stack_pointer - 16;
          stack_pointer = a;
          b = a + 12;
        }
        if (eqz(g_b) | eqz(c)) {
          arc4random_buf(b, 4);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          let t0 = a[3];
          stack_pointer = a + 16;
          return t0;
        }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = b;
  c.b = a;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function dummy() { // func10
}

function wasm_call_dtors() { // func11
  dummy();
  dummy();
}

function elem(a:{ a:ubyte, b:int, c:int }):int { // func12
  var c:int;
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(select_if(g_b, 1, a & 3))) { return a - 1 }
        if (eqz(g_b) | eqz(c)) {
          underlying(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          if (eqz(a)) goto B_g;
          if (eqz(a & 3)) {
            b = a.a & 31;
            if (b > 25) goto B_g;
            if (1 << b & 46661632) goto B_h;
            if (b != 21) goto B_g;
          }
          return a.b;
          label B_h:
          return a.c;
          label B_g:
        }
        if (eqz(g_b) | c == 1) {
          runtime_panic(68100, 68316);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function underlying(a:int_ptr):int { // func13
  var b:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = 
    {
      if (eqz(g_b) |
          eqz(if (g_b == 2) {
                g_c[0]:int = g_c[0]:int - 4;
                (g_c[0]:int)[0]:int;
              } else {
                0
              })) {
        isNamed(a);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        b = t0;
      }
      if (eqz(g_b)) { return if (b & 1) { a[2] } else { a } }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function runtime_panic(a:int, b:{ a:int, b:int }) { // func14
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               runtime_panicOrGoexit(a, b);
                               0;
                               if (g_b == 1) goto B_b;
                             }
                             if (eqz(g_b)) { unreachable }
                             return ;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function isNamed(a:ubyte_ptr):int { // func15
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          return if (a & 3) {
                   0
                 } else {
                   if (eqz(a)) goto B_d;
                   (a[0] & 32) >> 5;
                 }
          label B_d:
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function runtime_nilPanic() { // func16
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(66413, 23);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function String(a:{ a:int, b:int }, b:int) { // func17
  var c:ushort_ptr;
  var h:int_ptr;
  var f:int;
  var e:int;
  var d:int;
  var g:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    d = g_c[0]:int;
    a = d[0]:int;
    c = d[2]:int;
    e = d[3]:int;
    g = d[4]:int;
    h = d[5]:int;
    b = d[1]:int;
  }
  d = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        c = stack_pointer;
        h = c - 48;
        stack_pointer = h;
      }
      if (eqz(g_b) | eqz(f)) {
        isNamed(b);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      if (eqz(g_b)) {
        c = eqz(c & 1);
        if (eqz(c)) {
          loop L_h {
            continue L_h
          }
          unreachable;
        }
      }
      if (eqz(g_b)) {
        if (eqz(b)) {
          c = 0;
          goto B_j;
        }
        c = b & 3;
      }
      if (eqz(g_b)) {
        if (c) goto B_t;
        e = 12;
        g = 66067;
        c = b[0]:ubyte & 31;
        br_table[B_v, B_i, B_t, B_s, B_r, B_j, B_q, B_p, ..B_j](c - 19);
        label B_v:
        c = h + 16;
      }
      if (eqz(g_b) | f == 1) {
        elem(b);
        let t1 = 1;
        if (g_b == 1) goto B_b;
        e = t1;
      }
      if (eqz(g_b) | f == 2) {
        String(c, e);
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        c = (b[0]:ubyte & 31) != 19;
        if (c) goto B_n;
        c = h[5];
        d = h[4];
        e = 4;
        g = 65902;
        br_table[B_aa, B_ba, B_z, ..B_i](b[1]:ushort - 1)
        label B_ba:
        if (eqz(c)) {
          e = 7;
          g = 66029;
          goto B_i;
        }
        g = 0;
        b[0]:int@1 = rodata[496]:int@1;
        b[0]:int@1 = rodata[493]:int@1;
        memory_copy(b, d, c);
        e = c + 7;
        goto B_i;
        label B_aa:
        if (eqz(c)) {
          e = 7;
          g = 66036;
          goto B_i;
        }
        g = 0;
        b[0]:int@1 = rodata[503]:int@1;
        b[0]:int@1 = rodata[500]:int@1;
        memory_copy(b, d, c);
        e = c + 7;
        goto B_i;
        label B_z:
        e = eqz(c);
        if (e) goto B_o;
        if (d[0]:ubyte == 60) {
          b[0]:short@1 = rodata[511]:ushort@1;
          b[0]:int@1 = rodata[507]:int@1;
          memory_copy(b, d, c);
          e = 1;
          g = 66049;
          goto B_i;
        }
        g = 0;
        b[0]:byte = rodata[518]:ubyte;
        b[0]:int@1 = rodata[514]:int@1;
        memory_copy(b, d, c);
        e = c + 5;
        goto B_i;
      }
      label B_t:
      c = select_if(c, h + 24, g_b);
      if (eqz(g_b) | f == 3) {
        elem(b);
        let t2 = 3;
        if (g_b == 1) goto B_b;
        b = t2;
      }
      if (eqz(g_b) | f == 4) {
        String(c, b);
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e = 1;
        g = 66055;
        goto B_i;
      }
      label B_s:
      c = select_if(c, h + 32, g_b);
      if (eqz(g_b) | f == 5) {
        elem(b);
        let t3 = 5;
        if (g_b == 1) goto B_b;
        b = t3;
      }
      if (eqz(g_b) | f == 6) {
        String(c, b);
        6;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) {
        e = 2;
        g = 66056;
        goto B_i;
      }
      label B_r:
      if (eqz(g_b) | f == 7) {
        underlying(b);
        let t4 = 7;
        if (g_b == 1) goto B_b;
        a = t4;
      }
      if (eqz(g_b)) { unreachable }
      label B_q:
      if (eqz(g_b) | f == 8) {
        underlying(b);
        let t5 = 8;
        if (g_b == 1) goto B_b;
        b = t5;
      }
      if (eqz(g_b)) {
        a = eqz(b);
        if (a) goto B_m;
        a = b & 3;
        if (a) goto B_m;
        a = (b[0]:ubyte & 31) != 25;
        if (a) goto B_m;
        b = b[3]:int;
        a = h + 40;
      }
      if (eqz(g_b) | f == 9) {
        String(a, b);
        9;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_p:
      if (eqz(g_b) | f == 10) {
        underlying(b);
        let t6 = 10;
        if (g_b == 1) goto B_b;
        c = t6;
      }
      if (eqz(g_b)) {
        c = c[8];
        if (eqz(c)) {
          e = 9;
          g = 66058;
          goto B_i;
        }
      }
      if (eqz(g_b) | f == 11) {
        rawField(b);
        11;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_o:
      if (eqz(g_b) | f == 12) {
        runtime_lookupPanic();
        12;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_n:
      if (eqz(g_b) | f == 13) {
        runtime_panic(68100, 68340);
        13;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_m:
      if (eqz(g_b) | f == 14) {
        runtime_panic(68100, 68324);
        14;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_j:
      if (eqz(g_b)) {
        String_1(h + 8, c);
        g = h[2];
        e = h[3];
      }
      label B_i:
      if (eqz(g_b)) {
        a.a = g;
        a.b = e;
        stack_pointer = h + 48;
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d[0]:int = a;
  d[1]:int = b;
  d[2]:int = c;
  d[3]:int = e;
  d[4]:int = g;
  d[5]:int = h;
  g_c[0]:int = g_c[0]:int + 24;
}

function rawField(a:int) { // func18
  var b:int;
  var c:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        c = eqz(select_if(1, a, g_b));
        if (eqz(g_b)) {
          if (c | (a & 3)) goto B_e;
          if ((a[0]:ubyte & 31) != 26) goto B_e;
        }
        if (eqz(g_b) | eqz(b)) {
          underlying(a);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b)) {
          if (eqz(a[8]:ushort)) goto B_d;
          c = a[6]:int + 1;
          if (c) {
            a = 0;
            loop L_j {
              if (a != 5) {
                let t1 = a + c;
                a = a + 1;
                if (t1[0]:byte < 0) continue L_j;
              }
            }
            loop L_l {
              continue L_l
            }
            unreachable;
          }
        }
        if (eqz(g_b) | b == 1) {
          runtime_unsafeSlicePanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_e:
        if (eqz(g_b) | b == 2) {
          runtime_panic(68100, 68332);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | b == 3) {
          runtime_panic(67760, 66112);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_lookupPanic() { // func19
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(66466, 18);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function String_1(a:{ a:int, b:int }, b:int) { // func20
  var d:int = 7;
  var c:int = 65782;
  br_table[B_aa, B_z, B_y, B_x, B_w, B_v, B_u, B_t, B_s, B_r, B_q, B_p, B_o, B_n, B_m, B_l, B_k, B_j, B_i, B_h, B_g, B_f, B_e, B_d, B_c, B_b, ..B_a](
    (b & 255) - 1)
  label B_aa:
  d = 4;
  c = 65789;
  goto B_a;
  label B_z:
  d = 3;
  c = 65793;
  goto B_a;
  label B_y:
  d = 4;
  c = 65796;
  goto B_a;
  label B_x:
  d = 5;
  c = 65800;
  goto B_a;
  label B_w:
  d = 5;
  c = 65805;
  goto B_a;
  label B_v:
  d = 5;
  c = 65810;
  goto B_a;
  label B_u:
  d = 4;
  c = 65815;
  goto B_a;
  label B_t:
  d = 5;
  c = 65819;
  goto B_a;
  label B_s:
  d = 6;
  c = 65824;
  goto B_a;
  label B_r:
  d = 6;
  c = 65830;
  goto B_a;
  label B_q:
  d = 6;
  c = 65836;
  goto B_a;
  label B_p:
  c = 65842;
  goto B_a;
  label B_o:
  c = 65849;
  goto B_a;
  label B_n:
  c = 65856;
  goto B_a;
  label B_m:
  d = 9;
  c = 65863;
  goto B_a;
  label B_l:
  d = 10;
  c = 65872;
  goto B_a;
  label B_k:
  d = 6;
  c = 65882;
  goto B_a;
  label B_j:
  d = 14;
  c = 65888;
  goto B_a;
  label B_i:
  d = 4;
  c = 65902;
  goto B_a;
  label B_h:
  d = 9;
  c = 65906;
  goto B_a;
  label B_g:
  d = 3;
  c = 65915;
  goto B_a;
  label B_f:
  d = 5;
  c = 65918;
  goto B_a;
  label B_e:
  d = 5;
  c = 65923;
  goto B_a;
  label B_d:
  d = 4;
  c = 65928;
  goto B_a;
  label B_c:
  d = 3;
  c = 65932;
  goto B_a;
  label B_b:
  d = 6;
  c = 65935;
  label B_a:
  a.a = c;
  a.b = d;
}

function runtime_unsafeSlicePanic() { // func21
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(66502, 37);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function String_2(a:long_ptr, b:int, c:int) { // func22
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b[0]:int;
    b = b[1]:int;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var e:int = stack_pointer - 16;
          stack_pointer = e;
          if (eqz(b) | (b & 3)) goto B_e;
          if ((b[0]:ubyte & 31) != 17) goto B_e;
          a[0] = c[0]:long@4;
          stack_pointer = e + 16;
          return ;
          label B_e:
          a = e + 8;
        }
        if (eqz(g_b) | eqz(d)) {
          String(a, b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c[0]:int = a;
  c[1]:int = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function Unlock(a:int) { // func23
  var b:{ a:int, b:int }
  var d:int;
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        b = select_if(b, eqz(a), g_b);
        if (eqz(g_b)) {
          if (b) goto B_d;
          b = eqz(a[0]:ubyte);
        }
        if (eqz(g_b)) {
          if (b) goto B_f;
          b = a[1]:int;
          d = eqz(b);
        }
        if (eqz(g_b)) {
          if (d) goto B_h;
          a[1]:int = b.a;
          b.a = 0;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_scheduleTask(b);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { return  }
        label B_h:
        if (eqz(g_b)) {
          a[0]:byte = 0;
          return ;
        }
        label B_f:
        if (eqz(g_b) | c == 1) {
          runtime_panic(67760, 66312);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | c == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_scheduleTask(a:int_ptr) { // func24
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          var c:int_ptr = 69044[0]:int;
          if (c) { c[0] = a }
          69044[0]:int = a;
          if (a) {
            a[0] = 0;
            if (eqz(69040[0]:int)) { 69040[0]:int = a }
            return ;
          }
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_memequal(a:int, b:int, c:int, d:int):int { // func25
  var e:int;
  e = {
        loop L_b {
          c;
          if (c == e) goto B_a;
          var f:ubyte_ptr = b + e;
          let t0 = a + e;
          e = e + 1;
          if (t0[0]:ubyte == f[0]) continue L_b;
        }
        e - 1;
        label B_a:
      }
  return e >= c;
}

function runtime_hash32(a:int, b:int, c:{ a:ubyte, b:ubyte, c:ubyte }, d:int_ptr@1):int { // func26
  var e:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b | ((eqz(a) & b != 0) | b < 0))) {
          var f:int = b & 2147483644;
          e = (b * -962287725 ^ c) ^ -1130422988;
          d = a;
          c = b;
          loop L_d {
            if (c >= 4) {
              e = (d[0] + e) * -962287725;
              var g:int = e >> 16;
              e = e ^ g;
              c = c - 4;
              d = d + 4;
              continue L_d;
            }
          }
          c = a + f;
          br_table[B_g, B_h, B_i, ..B_f]((b & 3) - 1)
          label B_i:
          e = e + (c.c << 16);
          label B_h:
          e = e + (c.b << 8);
          label B_g:
          c = (e + c.a) * -962287725;
          e = c >> 24 ^ c;
          label B_f:
          return e;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_unsafeSlicePanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function runtime_runtimePanicAt(a:int, b:{ a:int, b:int }) { // func27
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_printstring(66391, 22);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 1) {
          runtime_printstring(a, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 2) {
          runtime_printnl();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_slicePanic() { // func28
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(66484, 18);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_printstring(a:ubyte_ptr, b:int) { // func29
  var d:{ a:int, b:int, c:int }
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    c = c.c;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) { b = select_if(b, 0, c = b > 0) }
        loop L_e {
          if (eqz(g_b)) {
            if (eqz(b)) goto B_f;
            c = a[0];
          }
          if (eqz(g_b) | eqz(d)) {
            runtime_putchar(c);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            b = b - 1;
            a = a + 1;
            continue L_e;
          }
          label B_f:
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_printnl() { // func30
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_putchar(10);
                  0;
                  if (g_b == 1) goto B_a;
                }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_putchar(a:int) { // func31
  var b:int;
  var d:int;
  var c:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = 68908[0]:int;
          b = d > 119;
        }
        if (eqz(g_b)) {
          if (b) goto B_d;
          68908[0]:int = (b = d + 1);
          (d + 68912)[0]:byte = a;
          a = (a & 255) == 10;
        }
        if (eqz(g_b)) {
          if (eqz(a) & d != 119) goto B_f;
          data[1]:int = b;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_fd_write(1, 68268, 1, 69036);
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { 68908[0]:int = 0 }
        label B_f:
        if (eqz(g_b)) { return  }
        label B_d:
        if (eqz(g_b) | c == 1) {
          runtime_lookupPanic();
          1;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_hashmapBinaryGet(a:int_ptr, b:int, c:int, d:int):int { // func32
  var j:int;
  var g:int_ptr;
  var f:int;
  var k:int;
  var h:int;
  var l:int;
  var i:int;
  var n:int;
  var m:int;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 48;
    e = g_c[0]:int;
    a = e.a;
    c = e.c;
    d = e.d;
    f = e.e;
    g = e.f;
    h = e.g;
    i = e.h;
    k = e.i;
    l = e.j;
    m = e.k;
    n = e.l;
    b = e.b;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          j = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          if (eqz(a)) {
            memory_fill(c, 0, d);
            return 0;
          }
          g = a[3];
          f = a[1];
        }
        if (eqz(g_b) | eqz(j)) {
          runtime_hash32(b, g, f, d);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          d = t0;
        }
        if (eqz(g_b)) {
          k = select_if(1, d >> 24, f = d < 16777216);
          g = runtime_hashmapBucketAddrForHash(a, d);
        }
        loop L_i {
          if (eqz(g_b)) {
            if (eqz(g)) goto B_j;
            l = g + 12;
            d = 0;
          }
          loop L_l {
            if (eqz(g_b)) {
              f = d == 8;
              if (f) goto B_m;
              f = k != (d + g)[0]:ubyte;
            }
            if (eqz(g_b)) {
              if (f) goto B_o;
              h = a[7];
              if (eqz(h)) goto B_h;
              m = a[4];
              n = a[6];
              i = l + (f = a[3]) * d;
            }
            if (eqz(g_b) | j == 1) {
              call_indirect(b, i, f, n, h);
              let t1 = 1;
              if (g_b == 1) goto B_b;
              h = t1;
            }
            if (eqz(g_b)) {
              h = eqz(h & 1);
              if (h) goto B_o;
              memory_copy(c, g + (f << 3) + d * m + 12, a[4]);
              return 1;
            }
            label B_o:
            if (eqz(g_b)) {
              d = d + 1;
              continue L_l;
            }
            label B_m:
          }
          if (eqz(g_b)) {
            g = g[2];
            continue L_i;
          }
          label B_j:
        }
        if (eqz(g_b)) {
          memory_fill(c, 0, a[4]);
          return 0;
        }
        label B_h:
        if (eqz(g_b) | j == 2) {
          runtime_nilPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e.a = a;
  e.b = b;
  e.c = c;
  e.d = d;
  e.e = f;
  e.f = g;
  e.g = h;
  e.h = i;
  e.i = k;
  e.j = l;
  e.k = m;
  e.l = n;
  g_c[0]:int = g_c[0]:int + 48;
  return 0;
}

function runtime_hashmapBucketAddrForHash(a:int, b:int):int { // func33
  return a[0]:int +
         ((a[4]:int + a[3]:int << 3) + 12) *
         (select_if(-1, -1 << (a = a[20]:ubyte) ^ -1, a > 31) & b)
}

function runtime_nilMapPanic() { // func34
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  runtime_runtimePanicAt(66436, 30);
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { unreachable }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_printint32(a:int) { // func35
  var b:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(eqz(g_b) & select_if(0, a >= 0, g_b))) {
          if (eqz(g_b) | eqz(b)) {
            runtime_putchar(45);
            0;
            if (g_b == 1) goto B_b;
          }
          a = select_if(a, 0 - a, g_b);
        }
        if (eqz(g_b) | b == 1) {
          runtime_printuint32(a);
          1;
          if (g_b == 1) goto B_b;
        }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function runtime_printuint32(a:int) { // func36
  var b:int;
  var c:long;
  b = {
        c = select_if(if (g_b == 2) {
                        g_c[0]:int = g_c[0]:int - 12;
                        b = g_c[0]:int;
                        a = b[0]:int;
                        b[1]:long@4;
                      } else {
                        0L
                      },
                      i64_extend_i32_u(a),
                      g_b);
        if (eqz(g_b) |
            eqz(if (g_b == 2) {
                  g_c[0]:int = g_c[0]:int - 4;
                  (g_c[0]:int)[0]:int;
                } else {
                  0
                })) {
          runtime_printuint64(c);
          0;
          if (g_b == 1) goto B_a;
        }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b[0]:int = a;
  b[1]:long@4 = c;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_printuint64(a:long) { // func37
  var b:int;
  var e:int;
  var d:int;
  var c:ubyte_ptr;
  var f:int;
  var g:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    b = g_c[0]:int;
    a = b[0]:long@4;
    c = b[2]:int;
    d = b[3]:int;
    e = b[4]:int;
    b = b[5]:int;
  }
  f = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        f = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        b = stack_pointer - 32;
        stack_pointer = b;
        (b + 24)[0]:int = 0;
        (b + 16)[0]:long = 0L;
        b[1]:long = 0L;
        d = 19;
        c = 19;
      }
      loop L_e {
        e = select_if(e, d >= 0, g_b);
        if (eqz(g_b)) {
          if (e) goto B_f;
          d = select_if(20, c, c <= 20) - c;
          e = b + 8;
          c = e + c;
        }
        loop L_h {
          if (eqz(g_b)) {
            if (eqz(d)) goto B_i;
            e = c[0];
          }
          if (eqz(g_b) | eqz(f)) {
            runtime_putchar(e);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) {
            d = d - 1;
            c = c + 1;
            continue L_h;
          }
          label B_i:
        }
        if (eqz(g_b)) {
          stack_pointer = b + 32;
          return ;
        }
        label B_f:
        if (eqz(g_b)) {
          (b + 8 + d)[0]:byte = i32_wrap_i64(a = a - (g = a / 10L) * 10L) | 48;
          c = select_if(c, d, e = eqz(a));
          d = d - 1;
          a = g;
          continue L_e;
        }
      }
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f[0]:long@4 = a;
  f[2]:int = c;
  f[3]:int = d;
  f[4]:int = e;
  f[5]:int = b;
  g_c[0]:int = g_c[0]:int + 24;
}

export function malloc(a:int):int { // func38
  var b:{ a:int, b:int, c:int }
  var d:int;
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          b = stack_pointer - 16;
          stack_pointer = b;
          d = eqz(a);
        }
        if (eqz(g_b)) {
          if (d) goto B_f;
          if (a < 0) goto B_e;
          b.c = a;
          b.b = a;
          a = b + 12;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_hashmapBinarySet(68276, a, b);
          0;
          if (g_b == 1) goto B_b;
        }
        label B_f:
        if (eqz(g_b)) {
          stack_pointer = b + 16;
          return 0;
        }
        label B_e:
        if (eqz(g_b) | c == 1) {
          runtime_slicePanic();
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        unreachable;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function runtime_hashmapBinarySet(a:int_ptr, b:int, c:int) { // func39
  var e:int;
  var l:int;
  var g:int_ptr;
  var f:int;
  var o:int;
  var r:ubyte_ptr;
  var s:int;
  var n:int;
  var j:int;
  var p:int;
  var q:int;
  var m:int;
  var i:byte_ptr;
  var h:int;
  var k:int;
  var d:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int, k:int, l:int, m:int, n:int, o:int, p:int, q:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 68;
    d = g_c[0]:int;
    a = d.a;
    c = d.c;
    e = d.d;
    f = d.e;
    g = d.f;
    h = d.g;
    i = d.h;
    k = d.i;
    j = d.j;
    m = d.k;
    n = d.l;
    o = d.m;
    p = d.n;
    q = d.o;
    r = d.p;
    s = d.q;
    b = d.b;
  }
  d = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          l = (g_c[0]:int)[0]:int;
        }
        e = select_if(e, eqz(a), g_b);
        if (eqz(g_b)) {
          if (e) goto B_e;
          g = a[1];
          e = a[3];
        }
        if (eqz(g_b) | eqz(l)) {
          runtime_hash32(b, e, g, f);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          f = t0;
        }
        if (eqz(g_b)) {
          n = select_if(1, e = f >> 24, f < 16777216);
          h = 0;
          k = 0;
          i = 0;
          g = runtime_hashmapBucketAddrForHash(a, f);
        }
        loop L_i {
          if (eqz(g_b)) {
            if (eqz(g)) goto B_j;
            o = g + 12;
            f = 0;
          }
          loop L_l {
            if (eqz(g_b)) {
              e = f == 8;
              if (e) goto B_m;
              p = o + f * (e = a[3]);
              m = o + (e << 3) + a[4] * f;
              r = f + g;
              s = r[0];
              j = s != n;
            }
            if (eqz(g_b)) {
              if (j) goto B_o;
              j = a[7];
              if (eqz(j)) goto B_d;
              q = a[6];
            }
            if (eqz(g_b) | l == 1) {
              call_indirect(b, p, e, q, j);
              let t1 = 1;
              if (g_b == 1) goto B_b;
              e = t1;
            }
            if (eqz(g_b)) {
              e = eqz(e & 1);
              if (e) goto B_o;
              memory_copy(m, c, a[4]);
              return ;
            }
            label B_o:
            if (eqz(g_b)) {
              i = select_if(i, r, e = h | s);
              h = select_if(h, p, e);
              k = select_if(k, m, e);
              f = f + 1;
              continue L_l;
            }
            label B_m:
          }
          if (eqz(g_b)) {
            g = g[2];
            continue L_i;
          }
          label B_j:
        }
        if (eqz(g_b)) {
          a[2] = a[2] + 1;
          memory_copy(h, b, a[3]);
          memory_copy(k, c, a[4]);
          if (eqz(i)) goto B_d;
          i[0] = n;
          return ;
        }
        label B_e:
        if (eqz(g_b) | l == 2) {
          runtime_nilMapPanic();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_d:
        if (eqz(g_b) | l == 3) {
          runtime_nilPanic();
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = d;
  g_c[0]:int = g_c[0]:int + 4;
  d = g_c[0]:int;
  d.a = a;
  d.b = b;
  d.c = c;
  d.d = e;
  d.e = f;
  d.f = g;
  d.g = h;
  d.h = i;
  d.i = k;
  d.j = j;
  d.k = m;
  d.l = n;
  d.m = o;
  d.n = p;
  d.o = q;
  d.p = r;
  d.q = s;
  g_c[0]:int = g_c[0]:int + 68;
}

export function free(a:int) { // func40
  var d:int_ptr;
  var b:int;
  var e:int;
  var c:{ a:int, b:int, c:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 12;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    d = c.c;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 16;
          stack_pointer = d;
          b = eqz(a);
        }
        if (eqz(g_b)) {
          if (b) goto B_f;
          d[3] = a;
          b = d + 12;
        }
        if (eqz(g_b) | eqz(e)) {
          runtime_hashmapBinaryGet(68276, b, d, 12);
          let t0 = 0;
          if (g_b == 1) goto B_b;
          b = t0;
        }
        if (eqz(g_b)) {
          if (eqz(b & 1)) goto B_e;
          d[0] = a;
        }
        if (eqz(g_b) | e == 1) {
          runtime_hashmapBinaryDelete(d);
          1;
          if (g_b == 1) goto B_b;
        }
        label B_f:
        if (eqz(g_b)) {
          stack_pointer = d + 16;
          return ;
        }
        label B_e:
        if (eqz(g_b) | e == 2) {
          runtime_panic(67760, 66344);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  c.c = d;
  g_c[0]:int = g_c[0]:int + 12;
}

function runtime_hashmapBinaryDelete(a:int) { // func41
  var h:int;
  var d:int_ptr;
  var f:int;
  var c:int;
  var i:int;
  var e:int;
  var j:int;
  var g:int;
  var l:int;
  var k:int;
  var b:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int, i:int, j:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 40;
    b = g_c[0]:int;
    a = b.a;
    d = b.b;
    e = b.d;
    f = b.e;
    g = b.f;
    i = b.g;
    j = b.h;
    k = b.i;
    l = b.j;
    c = b.c;
  }
  b = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        h = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        f = data[3]:int;
        d = data[5]:int;
      }
      if (eqz(g_b) | eqz(h)) {
        runtime_hash32(a, d, f, c);
        let t0 = 0;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      if (eqz(g_b)) {
        i = select_if(1, c >> 24, f = c < 16777216);
        d = runtime_hashmapBucketAddrForHash(68276, c);
      }
      loop L_h {
        if (eqz(g_b)) {
          if (eqz(d)) goto B_g;
          j = d + 12;
          c = 0;
        }
        loop L_k {
          if (eqz(g_b)) {
            f = c == 8;
            if (f) goto B_l;
            e = i != (f = c + d)[0]:ubyte;
          }
          if (eqz(g_b)) {
            if (e) goto B_n;
            e = data[9]:int;
            if (eqz(e)) goto B_j;
            k = data[8]:int;
            g = j + (l = data[5]:int) * c;
          }
          if (eqz(g_b) | h == 1) {
            call_indirect(a, g, l, k, e);
            let t1 = 1;
            if (g_b == 1) goto B_b;
            e = t1;
          }
          if (eqz(g_b)) {
            e = eqz(e & 1);
            if (e) goto B_n;
            f[0]:byte = 0;
            memory_fill(g, 0, data[5]:int);
            memory_fill(d + (data[5]:int << 3) + (d = data[6]:int) * c + 12, 0, d);
            data[4]:int = data[4]:int - 1;
            goto B_g;
          }
          label B_n:
          if (eqz(g_b)) {
            c = c + 1;
            continue L_k;
          }
          label B_l:
        }
        if (eqz(g_b)) {
          d = d[2];
          continue L_h;
        }
        label B_j:
      }
      if (eqz(g_b) | h == 2) {
        runtime_nilPanic();
        2;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_g:
      return ;
      label B_b:
    }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = d;
  b.c = c;
  b.d = e;
  b.e = f;
  b.f = g;
  b.g = i;
  b.h = j;
  b.i = k;
  b.j = l;
  g_c[0]:int = g_c[0]:int + 40;
}

export function calloc(a:int, b:{ a:int, b:int }):int { // func42
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             a = select_if(a, a * b, g_b);
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               malloc(a);
                               0;
                               if (g_b == 1) goto B_b;
                             }
                             if (eqz(g_b)) { return 0 }
                             unreachable;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

export function realloc(a:int, b:int):int { // func43
  var d:{ a:int, b:int, c:int, d:int }
  var e:int;
  var c:{ a:int, b:int, c:int, d:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 16;
    c = g_c[0]:int;
    a = c.a;
    b = c.b;
    d = c.c;
    c = c.d;
  }
  var f:{ a:int, b:int, c:int, d:int } = 
    {
      if (g_b == 2) {
        g_c[0]:int = g_c[0]:int - 4;
        e = (g_c[0]:int)[0]:int;
      }
      if (eqz(g_b)) {
        d = stack_pointer - 16;
        stack_pointer = d;
      }
      if (select_if(g_b, 1, b)) {
        if (eqz(g_b) | eqz(e)) {
          free(a);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_g;
      }
      if (eqz(g_b)) {
        if (b < 0) goto B_f;
        c = eqz(a);
      }
      if (eqz(g_b)) {
        if (c) goto B_k;
        d.d = a;
        c = d + 12;
      }
      if (eqz(g_b) | e == 1) {
        runtime_hashmapBinaryGet(68276, c, d, 12);
        let t0 = 1;
        if (g_b == 1) goto B_b;
        c = t0;
      }
      if (eqz(g_b)) {
        if (eqz(c & 1)) goto B_e;
        memory_copy(d, d.a, select_if(c = d.b, b, b > c));
        d.a = a;
      }
      if (eqz(g_b) | e == 2) {
        runtime_hashmapBinaryDelete(d);
        2;
        if (g_b == 1) goto B_b;
      }
      label B_k:
      if (eqz(g_b)) {
        d.c = b;
        d.b = b;
        a = d + 12;
      }
      if (eqz(g_b) | e == 3) {
        runtime_hashmapBinarySet(68276, a, d);
        3;
        if (g_b == 1) goto B_b;
      }
      label B_g:
      if (eqz(g_b)) {
        stack_pointer = d + 16;
        return 0;
      }
      label B_f:
      if (eqz(g_b) | e == 4) {
        runtime_slicePanic();
        4;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      label B_e:
      if (eqz(g_b) | e == 5) {
        runtime_panic(67760, 66376);
        5;
        if (g_b == 1) goto B_b;
      }
      if (eqz(g_b)) { unreachable }
      unreachable;
      label B_b:
    }
  (g_c[0]:int)[0]:int = f;
  g_c[0]:int = g_c[0]:int + 4;
  f = g_c[0]:int;
  f.a = a;
  f.b = b;
  f.c = d;
  f.d = c;
  g_c[0]:int = g_c[0]:int + 16;
  return 0;
}

export function start() { // func44
  var c:int_ptr;
  var a:int;
  var b:{ a:int, b:int }
  var d:int;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    c = b.b;
  }
  b = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          d = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          c = stack_pointer - 16;
          stack_pointer = c;
          69032[0]:int =
            (b = (a = memory_size() << 16) - (a = (a - 69344) / 65));
          memory_fill(b, 0, a);
        }
        if (eqz(g_b) | eqz(d)) {
          arc4random();
          let t0 = 0;
          if (g_b == 1) goto B_b;
          a = t0;
        }
        if (eqz(g_b) | d == 1) {
          arc4random();
          let t1 = 1;
          if (g_b == 1) goto B_b;
          a = t1;
        }
        if (eqz(g_b)) {
          c[1] = 9;
          c[0] = 66548;
          c[3] = 0;
          a = c + 12;
        }
        if (eqz(g_b) | d == 2) {
          runtime_hashmapBinarySet(0, a, c);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  b = g_c[0]:int;
  b.a = a;
  b.b = c;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_panicOrGoexit(a:int, b:{ a:int, b:int }) { // func45
  var c:{ a:int, b:int }
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  c = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          c = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b) | eqz(c)) {
          runtime_printstring(66384, 7);
          0;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 1) {
          runtime_printitf(a, b);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b) | c == 2) {
          runtime_printnl();
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
}

function runtime_printitf(a:int, b:int) { // func46
  var d:int;
  var c:int;
  var e:int;
  var f:long;
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 24;
    b = g_c[0]:int;
    a = b[0]:int;
    c = b[2]:int;
    d = b[3]:int;
    f = b[4]:long@4;
    b = b[1]:int;
  }
  e = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          e = (g_c[0]:int)[0]:int;
        }
        if (eqz(g_b)) {
          d = stack_pointer - 112;
          stack_pointer = d;
          c = a != 67648;
        }
        if (eqz(g_b)) {
          if (c) goto B_f;
          a = eqz(b & 1);
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | eqz(e)) {
            runtime_printstring(66539, 4);
            0;
            if (g_b == 1) goto B_b;
          }
          if (eqz(g_b)) goto B_e;
        }
        if (eqz(g_b) | e == 1) {
          runtime_printstring(66543, 5);
          1;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_f:
        c = select_if(c, a == 67664, g_b);
        if (eqz(g_b)) {
          if (c) goto B_k;
          c = a != 66568;
        }
        if (eqz(g_b)) {
          if (c) goto B_m;
          a = i32_extend8_s(b);
        }
        if (eqz(g_b) | e == 2) {
          runtime_printint32(a);
          2;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_m:
        c = select_if(c, a != 66584, g_b);
        if (eqz(g_b)) {
          if (c) goto B_p;
          a = i32_extend16_s(b);
        }
        if (eqz(g_b) | e == 3) {
          runtime_printint32(a);
          3;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_p:
        if (eqz(g_b)) {
          if (a == 67728) goto B_k;
          c = a != 67080;
        }
        if (eqz(g_b)) {
          if (c) goto B_t;
          f = b[0]:long;
          a = f >= 0L;
        }
        if (select_if(g_b, 1, a)) {
          if (eqz(g_b) | e == 4) {
            runtime_putchar(45);
            4;
            if (g_b == 1) goto B_b;
          }
          f = select_if(f, 0L - f, g_b);
        }
        if (eqz(g_b) | e == 5) {
          runtime_printuint64(f);
          5;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_t:
        c = select_if(c, a == 66600, g_b);
        if (eqz(g_b)) {
          if (c) goto B_y;
          c = a != 67492;
        }
        if (eqz(g_b)) {
          if (c) goto B_aa;
          a = b & 255;
        }
        if (eqz(g_b) | e == 6) {
          runtime_printuint32(a);
          6;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_aa:
        c = select_if(c, a != 66616, g_b);
        if (eqz(g_b)) {
          if (c) goto B_da;
          a = b & 65535;
        }
        if (eqz(g_b) | e == 7) {
          runtime_printuint32(a);
          7;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_da:
        if (eqz(g_b)) {
          if (a == 67064) goto B_y;
          c = a != 67744;
        }
        if (eqz(g_b)) {
          if (c) goto B_ha;
          f = b[0]:long;
        }
        if (eqz(g_b) | e == 8) {
          runtime_printuint64(f);
          8;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_ha:
        if (eqz(g_b)) {
          if (a == 66964) goto B_y;
          c = a != 67760;
        }
        if (eqz(g_b)) {
          if (c) goto B_la;
          a = b[0]:int;
          b = b[1]:int;
        }
        if (eqz(g_b) | e == 9) {
          runtime_printstring(a, b);
          9;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_la:
        c = select_if(c, a == 68076, g_b);
        if (eqz(g_b)) {
          if (eqz(((c | a == 68100) | (a == 68116 | a == 68140)) |
                  (a == 68180 | a == 68164))) {
            c = a != 68016;
            if (c) goto B_sa;
          }
          if (a == 68180) {
            if (b) goto B_ra;
            goto B_oa;
          }
          if (a == 68164 | a == 68140) goto B_oa;
          c = {
                if (a == 68116) {
                  if (eqz(b)) goto B_oa;
                  c = b[1]:int;
                  b = b[0]:int;
                  a = 0;
                  a[0]:byte = rodata[646]:ubyte;
                  0[0]:long@1 = rodata[638]:long@1;
                  0[0]:long@1 = rodata[630]:long@1;
                  if (eqz(c)) goto B_xa;
                  memory_copy(0, b, c);
                  a = 66183;
                  14;
                  goto B_wa;
                }
                if (a == 68100) {
                  if (eqz(b)) goto B_oa;
                  a = b[1]:int;
                  if (a) {
                    b = b[0]:int;
                    a[0]:long@1 = rodata[606]:long@1;
                    a[0]:long@1 = rodata[600]:long@1;
                    a[0]:long@1 = rodata[592]:long@1;
                    a[0]:long@1 = rodata[584]:long@1;
                    memory_copy(a, b, a);
                    a = 66150;
                    16;
                    goto B_wa;
                  }
                  a = 0;
                  a[0]:long@1 = rodata[606]:long@1;
                  0[0]:long@1 = rodata[600]:long@1;
                  0[0]:long@1 = rodata[592]:long@1;
                  0[0]:long@1 = rodata[584]:long@1;
                  0[0]:long@1 = rodata[622]:long@1;
                  0[0]:long@1 = rodata[614]:long@1;
                  46;
                  goto B_wa;
                }
                if (eqz(b) | a != 68076) goto B_oa;
                a = b[0]:int;
                b[1]:int;
                goto B_wa;
                label B_xa:
                0[0]:long@1 = rodata[653]:long@1;
                0[0]:long@1 = rodata[647]:long@1;
                31;
                label B_wa:
              }
        }
        if (eqz(g_b) | e == 10) {
          runtime_printstring(a, c);
          10;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_sa:
        c = select_if(c, a != 68240, g_b);
        if (eqz(g_b)) {
          if (c) goto B_db;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 8;
        }
        if (eqz(g_b) | e == 11) {
          String_2(a, c, b);
          11;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[3]:int;
          b = d[2]:int;
          goto B_cb;
        }
        label B_db:
        c = select_if(c, a != 68204, g_b);
        if (eqz(g_b)) {
          if (c) goto B_hb;
          if (eqz(b)) goto B_oa;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 16;
        }
        if (eqz(g_b) | e == 12) {
          String_2(a, c, b);
          12;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[5]:int;
          b = d[4]:int;
          goto B_cb;
        }
        label B_hb:
        c = select_if(c, a != 68196, g_b);
        if (eqz(g_b)) {
          if (c) goto B_lb;
          if (eqz(b)) goto B_oa;
          a = d + 24;
        }
        if (eqz(g_b) | e == 13) {
          String(a, b);
          13;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[7]:int;
          b = d[6]:int;
          goto B_cb;
        }
        label B_lb:
        if (eqz(g_b)) {
          if (a == 68188) goto B_oa;
          c = a != 68172;
        }
        if (select_if(g_b, 1, c)) {
          if (eqz(g_b)) {
            if (eqz(b)) {
              b = 66632;
              goto B_rb;
            }
            a = b != 69328;
            if (a) goto B_rb;
            if (69396[0]:ubyte) {
              69400[0]:int = 0;
              goto B_oa;
            }
            69396[0]:byte = 1;
            d[26]:int = 69396;
            d[12]:long = 0L;
            a = eqz(69392[0]:ubyte);
          }
          if (eqz(g_b)) {
            if (a) goto B_wb;
            a = d + 96;
          }
          loop L_yb {
            if (eqz(g_b)) {
              b = eqz(a);
              if (b) goto B_vb;
              b = a[1]:int;
              a = a[2]:int;
            }
            if (eqz(g_b) | e == 14) {
              Unlock(a);
              14;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              a = b;
              continue L_yb;
            }
          }
          label B_wb:
          if (eqz(g_b)) {
            69332[0]:int = 5;
            69328[0]:int = 66940;
            69392[0]:byte = 1;
            a = d + 96;
          }
          loop L_dc {
            if (eqz(g_b)) {
              b = eqz(a);
              if (b) goto B_vb;
              b = a[1]:int;
              a = a[2]:int;
            }
            if (eqz(g_b) | e == 15) {
              Unlock(a);
              15;
              if (g_b == 1) goto B_b;
            }
            if (eqz(g_b)) {
              a = b;
              continue L_dc;
            }
          }
          label B_vb:
          b = select_if(b, 69328, g_b);
          label B_rb:
          if (eqz(g_b)) {
            a = b[1]:int;
            b = b[0]:int;
            goto B_cb;
          }
        }
        c = select_if(c, a != 68156, g_b);
        if (eqz(g_b)) {
          if (c) goto B_ic;
          if (eqz(b)) goto B_oa;
          a = d + 32;
        }
        if (eqz(g_b) | e == 16) {
          String(a, b);
          16;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[9]:int;
          b = d[8]:int;
          goto B_cb;
        }
        label B_ic:
        c = select_if(c, a != 68148, g_b);
        if (eqz(g_b)) {
          if (c) goto B_mc;
          if (eqz(b)) goto B_oa;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 40;
        }
        if (eqz(g_b) | e == 17) {
          String_2(a, c, b);
          17;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[11]:int;
          b = d[10]:int;
          goto B_cb;
        }
        label B_mc:
        if (eqz(g_b)) {
          if (a == 68132) goto B_qa;
          c = a != 68108;
        }
        if (eqz(g_b)) {
          if (c) goto B_rc;
          if (eqz(b)) goto B_oa;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 48;
        }
        if (eqz(g_b) | e == 18) {
          String_2(a, c, b);
          18;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[13]:int;
          b = d[12]:int;
          goto B_cb;
        }
        label B_rc:
        c = select_if(c, a != 68092, g_b);
        if (eqz(g_b)) {
          if (c) goto B_vc;
          a = d + 56;
        }
        if (eqz(g_b) | e == 19) {
          String(a, b);
          19;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[15]:int;
          b = d[14]:int;
          goto B_cb;
        }
        label B_vc:
        if (eqz(g_b)) {
          if (a == 68084) {
            if (eqz(b)) goto B_oa;
            String_1(d - -64, b[0]:ubyte);
            a = d[17]:int;
            b = d[16]:int;
            goto B_cb;
          }
          c = a != 67952;
        }
        if (eqz(g_b)) {
          if (c) goto B_bd;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 72;
        }
        if (eqz(g_b) | e == 20) {
          String_2(a, c, b);
          20;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[19]:int;
          b = d[18]:int;
          goto B_cb;
        }
        label B_bd:
        if (eqz(g_b)) {
          if (a == 67924) goto B_pa;
          c = a != 67848;
        }
        if (eqz(g_b)) {
          if (c) goto B_gd;
          c = b[0]:int;
          b = b[1]:int;
          a = d + 80;
        }
        if (eqz(g_b) | e == 21) {
          String_2(a, c, b);
          21;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) {
          a = d[21]:int;
          b = d[20]:int;
          goto B_cb;
        }
        label B_gd:
        if (eqz(g_b)) {
          if (a != 67776) goto B_oa;
          String_1(d + 88, b);
          b = d[22]:int;
          a = d[23]:int;
        }
        label B_cb:
        if (eqz(g_b) | e == 22) {
          runtime_printstring(b, a);
          22;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_ra:
        if (eqz(g_b) | e == 23) {
          runtime_slicePanic();
          23;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_qa:
        if (eqz(g_b) | e == 24) {
          String_3(b);
          24;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_pa:
        if (eqz(g_b)) {
          String_invoke(b);
          unreachable;
        }
        label B_oa:
        if (eqz(g_b) | e == 25) {
          runtime_nilPanic();
          25;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) { unreachable }
        label B_y:
        if (eqz(g_b) | e == 26) {
          runtime_printuint32(b);
          26;
          if (g_b == 1) goto B_b;
        }
        if (eqz(g_b)) goto B_e;
        label B_k:
        if (eqz(g_b) | e == 27) {
          runtime_printint32(b);
          27;
          if (g_b == 1) goto B_b;
        }
        label B_e:
        if (eqz(g_b)) { stack_pointer = d + 112 }
        return ;
        label B_b:
      }
  (g_c[0]:int)[0]:int = e;
  g_c[0]:int = g_c[0]:int + 4;
  e = g_c[0]:int;
  e[0]:int = a;
  e[1]:int = b;
  e[2]:int = c;
  e[3]:int = d;
  e[4]:long@4 = f;
  g_c[0]:int = g_c[0]:int + 24;
}

function String_3(a:int_ptr) { // func47
  var b:int;
  a = {
        if (g_b == 2) {
          g_c[0]:int = g_c[0]:int - 4;
          b = (g_c[0]:int)[0]:int;
        }
        if (eqz(select_if(g_b, 1, a))) {
          String_4(a[0]);
          unreachable;
        }
        if (eqz(g_b) | eqz(b)) {
          runtime_nilPanic();
          0;
          if (g_b == 1) goto B_a;
        }
        if (eqz(g_b)) { unreachable }
        return ;
        label B_a:
      }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function String_invoke(a:int) { // func48
  String_4(a);
  unreachable;
}

function String_4(a:int) { // func49
  var b:int;
  var e:int;
  loop L_a {
    if (b > 12) continue L_a;
    var d:int = (b + 66945)[0]:byte;
    if (d >= 0) {
      e = 1;
      goto B_b;
    }
    var c:int = 13 - b;
    if ((d & -32) == -64) {
      e = 1;
      if (c < 2) goto B_b;
      if (((b + 66946)[0]:ubyte & 192) != 128 | (d & 31) < 2) goto B_b;
      e = 2;
      goto B_b;
    }
    if ((d & -16) == -32) {
      e = 1;
      if (c < 3) goto B_b;
      c = (b + 66946)[0]:ubyte;
      if ((c & 192) != 128) goto B_b;
      if (((b + 66947)[0]:ubyte & 192) != 128) goto B_b;
      c = (c & 63) << 6 | (d = d & 15) << 12;
      if (c < 2048 | (d <= 13 & c > 55295)) goto B_b;
      e = 3;
      goto B_b;
    }
    e = 1;
    if ((d & 248) != 240 | c < 4) goto B_b;
    c = (b + 66946)[0]:ubyte;
    if ((c & 192) != 128) goto B_b;
    if (((b + 66947)[0]:ubyte & 192) != 128) goto B_b;
    if (((b + 66948)[0]:ubyte & 192) != 128 |
        ((c & 63) << 12 | (d & 7) << 18) - 65536 > 1048575) goto B_b;
    e = 4;
    label B_b:
    b = b + e;
    continue L_a;
  }
  unreachable;
}

function malloc_command_export(a:int):int { // func50
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  var b:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  malloc(a);
                  let t0 = 0;
                  if (g_b == 1) goto B_b;
                  a = t0;
                }
                if (eqz(g_b)) {
                  wasm_call_dtors();
                  return a;
                }
                unreachable;
                label B_b:
              }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
  return 0;
}

function free_command_export(a:int) { // func51
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 4;
    a = (g_c[0]:int)[0]:int;
  }
  var b:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  free(a);
                  0;
                  if (g_b == 1) goto B_b;
                }
                if (eqz(g_b)) { wasm_call_dtors() }
                return ;
                label B_b:
              }
  (g_c[0]:int)[0]:int = b;
  g_c[0]:int = g_c[0]:int + 4;
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

function calloc_command_export(a:int, b:{ a:int, b:int }):int { // func52
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               calloc(a, b);
                               let t0 = 0;
                               if (g_b == 1) goto B_b;
                               a = t0;
                             }
                             if (eqz(g_b)) {
                               wasm_call_dtors();
                               return a;
                             }
                             unreachable;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function realloc_command_export(a:int, b:{ a:int, b:int }):int { // func53
  if (g_b == 2) {
    g_c[0]:int = g_c[0]:int - 8;
    b = g_c[0]:int;
    a = b.a;
    b = b.b;
  }
  var c:{ a:int, b:int } = {
                             if (eqz(g_b) |
                                 eqz(if (g_b == 2) {
                                       g_c[0]:int = g_c[0]:int - 4;
                                       (g_c[0]:int)[0]:int;
                                     } else {
                                       0
                                     })) {
                               realloc(a, b);
                               let t0 = 0;
                               if (g_b == 1) goto B_b;
                               a = t0;
                             }
                             if (eqz(g_b)) {
                               wasm_call_dtors();
                               return a;
                             }
                             unreachable;
                             label B_b:
                           }
  (g_c[0]:int)[0]:int = c;
  g_c[0]:int = g_c[0]:int + 4;
  c = g_c[0]:int;
  c.a = a;
  c.b = b;
  g_c[0]:int = g_c[0]:int + 8;
  return 0;
}

function start_command_export() { // func54
  var a:int = {
                if (eqz(g_b) |
                    eqz(if (g_b == 2) {
                          g_c[0]:int = g_c[0]:int - 4;
                          (g_c[0]:int)[0]:int;
                        } else {
                          0
                        })) {
                  start();
                  0;
                  if (g_b == 1) goto B_a;
                }
                if (eqz(g_b)) { wasm_call_dtors() }
                return ;
                label B_a:
              }
  (g_c[0]:int)[0]:int = a;
  g_c[0]:int = g_c[0]:int + 4;
}

export function asyncify_start_unwind(a:int) { // func55
  g_b = 1;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_unwind() { // func56
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_start_rewind(a:int) { // func57
  g_b = 2;
  g_c = a;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_stop_rewind() { // func58
  g_b = 0;
  if (g_c[0]:int > g_c[1]:int) { unreachable }
}

export function asyncify_get_state():int { // func59
  return g_b
}

