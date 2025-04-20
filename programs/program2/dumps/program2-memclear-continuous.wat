(module $main
  (type (;0;) (func (param i32)))
  (type (;1;) (func))
  (type (;2;) (func (param i32 i32)))
  (type (;3;) (func (param i32 i32) (result i32)))
  (type (;4;) (func (param i32 i32 i32 i32) (result i32)))
  (type (;5;) (func (param i32) (result i32)))
  (type (;6;) (func (param i32 i32 i32) (result i32)))
  (type (;7;) (func (result i32)))
  (type (;8;) (func (param i32 i32 i32)))
  (type (;9;) (func (param i64)))
  (import "wasi_snapshot_preview1" "fd_write" (func $runtime.fd_write (type 4)))
  (import "wasi_snapshot_preview1" "random_get" (func $__imported_wasi_snapshot_preview1_random_get (type 3)))
  (func $__wasi_random_get (type 3) (param i32 i32) (result i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $__imported_wasi_snapshot_preview1_random_get
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 0
        i32.const 65535
        i32.and
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $__getentropy (type 3) (param i32 i32) (result i32)
    (local i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 12
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 2
      i32.load
      local.set 0
      local.get 2
      i32.load offset=4
      local.set 1
      local.get 2
      i32.load offset=8
      local.set 2
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 4
      end
      block  ;; label = @2
        global.get 1
        if (result i32)  ;; label = @3
          i32.const 0
        else
          i32.const 29
          local.set 2
          local.get 1
          i32.const 256
          i32.gt_u
        end
        global.get 1
        i32.eqz
        i32.and
        br_if 0 (;@2;)
        global.get 1
        i32.eqz
        local.get 4
        i32.eqz
        i32.or
        if  ;; label = @3
          local.get 0
          local.get 1
          call $__wasi_random_get
          i32.const 0
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
          local.set 2
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 2
          br_if 1 (;@2;)
          i32.const 0
          return
        end
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 68352
        local.get 2
        i32.store
        i32.const -1
        return
      end
      unreachable
    end
    local.set 3
    global.get 2
    i32.load
    local.get 3
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 3
    local.get 0
    i32.store
    local.get 3
    local.get 1
    i32.store offset=4
    local.get 3
    local.get 2
    i32.store offset=8
    global.get 2
    global.get 2
    i32.load
    i32.const 12
    i32.add
    i32.store
    i32.const 0)
  (func $memcpy (type 6) (param i32 i32 i32) (result i32)
    (local i32 i32 i32 i32)
    block  ;; label = @1
      block (result i32)  ;; label = @2
        block  ;; label = @3
          local.get 2
          i32.const 32
          i32.le_u
          if  ;; label = @4
            local.get 1
            i32.const 3
            i32.and
            i32.eqz
            local.get 2
            i32.eqz
            i32.or
            br_if 1 (;@3;)
            local.get 0
            local.get 1
            i32.load8_u
            i32.store8
            local.get 0
            i32.const 1
            i32.add
            local.tee 4
            local.get 1
            i32.const 1
            i32.add
            local.tee 3
            i32.const 3
            i32.and
            i32.eqz
            local.get 2
            i32.const 1
            i32.sub
            local.tee 5
            i32.eqz
            i32.or
            br_if 2 (;@2;)
            drop
            local.get 0
            local.get 1
            i32.load8_u offset=1
            i32.store8 offset=1
            local.get 0
            i32.const 2
            i32.add
            local.tee 4
            local.get 1
            i32.const 2
            i32.add
            local.tee 3
            i32.const 3
            i32.and
            i32.eqz
            local.get 2
            i32.const 2
            i32.sub
            local.tee 5
            i32.eqz
            i32.or
            br_if 2 (;@2;)
            drop
            local.get 0
            local.get 1
            i32.load8_u offset=2
            i32.store8 offset=2
            local.get 0
            i32.const 3
            i32.add
            local.tee 4
            local.get 1
            i32.const 3
            i32.add
            local.tee 3
            i32.const 3
            i32.and
            i32.eqz
            local.get 2
            i32.const 3
            i32.sub
            local.tee 5
            i32.eqz
            i32.or
            br_if 2 (;@2;)
            drop
            local.get 0
            local.get 1
            i32.load8_u offset=3
            i32.store8 offset=3
            local.get 2
            i32.const 4
            i32.sub
            local.set 5
            local.get 1
            i32.const 4
            i32.add
            local.set 3
            local.get 0
            i32.const 4
            i32.add
            br 2 (;@2;)
          end
          local.get 0
          local.get 1
          local.get 2
          memory.copy
          local.get 0
          return
        end
        local.get 2
        local.set 5
        local.get 1
        local.set 3
        local.get 0
      end
      local.tee 4
      i32.const 3
      i32.and
      local.tee 2
      i32.eqz
      if  ;; label = @2
        block  ;; label = @3
          local.get 5
          i32.const 16
          i32.lt_u
          if  ;; label = @4
            local.get 5
            local.set 2
            br 1 (;@3;)
          end
          local.get 5
          i32.const 16
          i32.sub
          local.tee 2
          i32.const 16
          i32.and
          i32.eqz
          if  ;; label = @4
            local.get 4
            local.get 3
            i64.load align=4
            i64.store align=4
            local.get 4
            local.get 3
            i64.load offset=8 align=4
            i64.store offset=8 align=4
            local.get 4
            i32.const 16
            i32.add
            local.set 4
            local.get 2
            local.set 5
            local.get 3
            i32.const 16
            i32.add
            local.set 3
          end
          local.get 2
          i32.const 16
          i32.lt_u
          br_if 0 (;@3;)
          local.get 5
          local.set 2
          loop  ;; label = @4
            local.get 4
            local.get 3
            i64.load align=4
            i64.store align=4
            local.get 4
            local.get 3
            i64.load offset=8 align=4
            i64.store offset=8 align=4
            local.get 4
            local.get 3
            i64.load offset=16 align=4
            i64.store offset=16 align=4
            local.get 4
            local.get 3
            i64.load offset=24 align=4
            i64.store offset=24 align=4
            local.get 4
            i32.const 32
            i32.add
            local.set 4
            local.get 3
            i32.const 32
            i32.add
            local.set 3
            local.get 2
            i32.const 32
            i32.sub
            local.tee 2
            i32.const 15
            i32.gt_u
            br_if 0 (;@4;)
          end
        end
        local.get 2
        i32.const 8
        i32.ge_u
        if  ;; label = @3
          local.get 4
          local.get 3
          i64.load align=4
          i64.store align=4
          local.get 4
          i32.const 8
          i32.add
          local.set 4
          local.get 3
          i32.const 8
          i32.add
          local.set 3
        end
        local.get 2
        i32.const 4
        i32.and
        if  ;; label = @3
          local.get 4
          local.get 3
          i32.load
          i32.store
          local.get 4
          i32.const 4
          i32.add
          local.set 4
          local.get 3
          i32.const 4
          i32.add
          local.set 3
        end
        local.get 2
        i32.const 2
        i32.and
        if  ;; label = @3
          local.get 4
          local.get 3
          i32.load16_u align=1
          i32.store16 align=1
          local.get 4
          i32.const 2
          i32.add
          local.set 4
          local.get 3
          i32.const 2
          i32.add
          local.set 3
        end
        local.get 2
        i32.const 1
        i32.and
        i32.eqz
        br_if 1 (;@1;)
        local.get 4
        local.get 3
        i32.load8_u
        i32.store8
        local.get 0
        return
      end
      block  ;; label = @2
        block  ;; label = @3
          block (result i32)  ;; label = @4
            block  ;; label = @5
              local.get 5
              i32.const 32
              i32.ge_u
              if  ;; label = @6
                local.get 4
                local.get 3
                i32.load
                local.tee 5
                i32.store8
                block  ;; label = @7
                  block  ;; label = @8
                    local.get 2
                    i32.const 2
                    i32.sub
                    br_table 0 (;@8;) 1 (;@7;) 3 (;@5;)
                  end
                  local.get 4
                  local.get 5
                  i32.const 8
                  i32.shr_u
                  i32.store8 offset=1
                  local.get 4
                  local.get 3
                  i32.const 6
                  i32.add
                  i64.load align=2
                  i64.store offset=6 align=4
                  local.get 4
                  local.get 3
                  i32.load offset=4
                  i32.const 16
                  i32.shl
                  local.get 5
                  i32.const 16
                  i32.shr_u
                  i32.or
                  i32.store offset=2
                  local.get 3
                  i32.const 18
                  i32.add
                  local.set 1
                  i32.const 14
                  local.set 6
                  local.get 3
                  i32.const 14
                  i32.add
                  i32.load align=2
                  local.set 3
                  i32.const 14
                  local.set 5
                  local.get 4
                  i32.const 18
                  i32.add
                  br 3 (;@4;)
                end
                local.get 4
                local.get 3
                i32.const 5
                i32.add
                i64.load align=1
                i64.store offset=5 align=4
                local.get 4
                local.get 3
                i32.load offset=4
                i32.const 24
                i32.shl
                local.get 5
                i32.const 8
                i32.shr_u
                i32.or
                i32.store offset=1
                local.get 3
                i32.const 17
                i32.add
                local.set 1
                i32.const 13
                local.set 6
                local.get 3
                i32.const 13
                i32.add
                i32.load align=1
                local.set 3
                i32.const 15
                local.set 5
                local.get 4
                i32.const 17
                i32.add
                br 2 (;@4;)
              end
              block (result i32)  ;; label = @6
                local.get 5
                i32.const 16
                i32.lt_u
                if  ;; label = @7
                  local.get 4
                  local.set 2
                  local.get 3
                  br 1 (;@6;)
                end
                local.get 4
                local.get 3
                i32.load8_u
                i32.store8
                local.get 4
                local.get 3
                i32.load offset=1 align=1
                i32.store offset=1 align=1
                local.get 4
                local.get 3
                i64.load offset=5 align=1
                i64.store offset=5 align=1
                local.get 4
                local.get 3
                i32.load16_u offset=13 align=1
                i32.store16 offset=13 align=1
                local.get 4
                local.get 3
                i32.load8_u offset=15
                i32.store8 offset=15
                local.get 4
                i32.const 16
                i32.add
                local.set 2
                local.get 3
                i32.const 16
                i32.add
              end
              local.set 1
              local.get 5
              i32.const 8
              i32.and
              br_if 2 (;@3;)
              br 3 (;@2;)
            end
            local.get 4
            local.get 5
            i32.const 16
            i32.shr_u
            i32.store8 offset=2
            local.get 4
            local.get 5
            i32.const 8
            i32.shr_u
            i32.store8 offset=1
            local.get 4
            local.get 3
            i32.const 7
            i32.add
            i64.load align=1
            i64.store offset=7 align=4
            local.get 4
            local.get 3
            i32.load offset=4
            i32.const 8
            i32.shl
            local.get 5
            i32.const 24
            i32.shr_u
            i32.or
            i32.store offset=3
            local.get 3
            i32.const 19
            i32.add
            local.set 1
            i32.const 15
            local.set 6
            local.get 3
            i32.const 15
            i32.add
            i32.load align=1
            local.set 3
            i32.const 13
            local.set 5
            local.get 4
            i32.const 19
            i32.add
          end
          local.set 2
          local.get 4
          local.get 6
          i32.add
          local.get 3
          i32.store
        end
        local.get 2
        local.get 1
        i64.load align=1
        i64.store align=1
        local.get 2
        i32.const 8
        i32.add
        local.set 2
        local.get 1
        i32.const 8
        i32.add
        local.set 1
      end
      local.get 5
      i32.const 4
      i32.and
      if  ;; label = @2
        local.get 2
        local.get 1
        i32.load align=1
        i32.store align=1
        local.get 2
        i32.const 4
        i32.add
        local.set 2
        local.get 1
        i32.const 4
        i32.add
        local.set 1
      end
      local.get 5
      i32.const 2
      i32.and
      if  ;; label = @2
        local.get 2
        local.get 1
        i32.load16_u align=1
        i32.store16 align=1
        local.get 2
        i32.const 2
        i32.add
        local.set 2
        local.get 1
        i32.const 2
        i32.add
        local.set 1
      end
      local.get 5
      i32.const 1
      i32.and
      i32.eqz
      br_if 0 (;@1;)
      local.get 2
      local.get 1
      i32.load8_u
      i32.store8
    end
    local.get 0)
  (func $memset (type 6) (param i32 i32 i32) (result i32)
    (local i32 i32 i64 i32)
    local.get 2
    i32.const 33
    i32.ge_u
    if  ;; label = @1
      local.get 0
      local.get 1
      local.get 2
      memory.fill
      local.get 0
      return
    end
    block  ;; label = @1
      local.get 2
      i32.eqz
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8
      local.get 0
      local.get 2
      i32.add
      local.tee 3
      i32.const 1
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 3
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8 offset=2
      local.get 0
      local.get 1
      i32.store8 offset=1
      local.get 3
      i32.const 3
      i32.sub
      local.get 1
      i32.store8
      local.get 3
      i32.const 2
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 7
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      local.get 1
      i32.store8 offset=3
      local.get 3
      i32.const 4
      i32.sub
      local.get 1
      i32.store8
      local.get 2
      i32.const 9
      i32.lt_u
      br_if 0 (;@1;)
      local.get 0
      i32.const 0
      local.get 0
      i32.sub
      i32.const 3
      i32.and
      local.tee 6
      i32.add
      local.tee 4
      local.get 1
      i32.const 255
      i32.and
      i32.const 16843009
      i32.mul
      local.tee 3
      i32.store
      local.get 4
      local.get 2
      local.get 6
      i32.sub
      i32.const 60
      i32.and
      local.tee 1
      i32.add
      local.tee 2
      i32.const 4
      i32.sub
      local.get 3
      i32.store
      local.get 1
      i32.const 9
      i32.lt_u
      br_if 0 (;@1;)
      local.get 4
      local.get 3
      i32.store offset=8
      local.get 4
      local.get 3
      i32.store offset=4
      local.get 2
      i32.const 8
      i32.sub
      local.get 3
      i32.store
      local.get 2
      i32.const 12
      i32.sub
      local.get 3
      i32.store
      local.get 1
      i32.const 25
      i32.lt_u
      br_if 0 (;@1;)
      local.get 4
      local.get 3
      i32.store offset=24
      local.get 4
      local.get 3
      i32.store offset=20
      local.get 4
      local.get 3
      i32.store offset=16
      local.get 4
      local.get 3
      i32.store offset=12
      local.get 2
      i32.const 16
      i32.sub
      local.get 3
      i32.store
      local.get 2
      i32.const 20
      i32.sub
      local.get 3
      i32.store
      local.get 2
      i32.const 24
      i32.sub
      local.get 3
      i32.store
      local.get 2
      i32.const 28
      i32.sub
      local.get 3
      i32.store
      local.get 1
      local.get 4
      i32.const 4
      i32.and
      i32.const 24
      i32.or
      local.tee 2
      i32.sub
      local.tee 1
      i32.const 32
      i32.lt_u
      br_if 0 (;@1;)
      local.get 3
      i64.extend_i32_u
      i64.const 4294967297
      i64.mul
      local.set 5
      local.get 2
      local.get 4
      i32.add
      local.set 2
      loop  ;; label = @2
        local.get 2
        local.get 5
        i64.store offset=24
        local.get 2
        local.get 5
        i64.store offset=16
        local.get 2
        local.get 5
        i64.store offset=8
        local.get 2
        local.get 5
        i64.store
        local.get 2
        i32.const 32
        i32.add
        local.set 2
        local.get 1
        i32.const 32
        i32.sub
        local.tee 1
        i32.const 31
        i32.gt_u
        br_if 0 (;@2;)
      end
    end
    local.get 0)
  (func $arc4random_buf (type 2) (param i32 i32)
    (local i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.const 1
      global.get 1
      if (result i32)  ;; label = @2
        i32.const 0
      else
        i32.const 68356
        i32.load
      end
      select
      if  ;; label = @2
        global.get 1
        i32.eqz
        local.get 2
        i32.eqz
        i32.or
        if  ;; label = @3
          i32.const 68364
          i32.const 32
          call $__getentropy
          drop
          i32.const 0
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          i32.const 68356
          i64.const 2199023255553
          i64.store align=4
        end
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        block  ;; label = @3
          local.get 1
          i32.eqz
          br_if 0 (;@3;)
          i32.const 68360
          i32.load
          local.set 2
          loop  ;; label = @4
            local.get 2
            i32.const 512
            i32.eq
            if  ;; label = @5
              local.get 1
              i32.const 512
              i32.ge_u
              if  ;; label = @6
                loop  ;; label = @7
                  local.get 0
                  local.get 4
                  i32.add
                  i32.const 68364
                  call $chacha20_rng
                  local.get 4
                  i32.const 512
                  i32.add
                  local.set 4
                  local.get 1
                  i32.const 512
                  i32.sub
                  local.tee 1
                  i32.const 511
                  i32.gt_u
                  br_if 0 (;@7;)
                end
              end
              local.get 1
              i32.eqz
              br_if 2 (;@3;)
              i32.const 68396
              i32.const 68364
              call $chacha20_rng
              i32.const 68360
              i32.const 0
              i32.store
              i32.const 0
              local.set 2
            end
            local.get 2
            i32.const 68396
            i32.add
            local.set 5
            i32.const 512
            local.get 2
            i32.sub
            local.tee 3
            local.get 1
            i32.gt_u
            local.set 2
            local.get 0
            local.get 4
            i32.add
            local.get 5
            local.get 1
            local.get 3
            local.get 2
            select
            local.tee 3
            call $memcpy
            drop
            i32.const 68360
            i32.load
            i32.const 68396
            i32.add
            i32.const 0
            local.get 3
            call $memset
            drop
            i32.const 68360
            i32.const 68360
            i32.load
            local.get 3
            i32.add
            local.tee 2
            i32.store
            local.get 3
            local.get 4
            i32.add
            local.set 4
            local.get 1
            local.get 3
            i32.sub
            local.tee 1
            br_if 0 (;@4;)
          end
        end
      end
      return
    end
    local.set 3
    global.get 2
    i32.load
    local.get 3
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 3
    local.get 0
    i32.store
    local.get 3
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $chacha20_rng (type 2) (param i32 i32)
    (local i32 i32 i32 i32)
    global.get $__stack_pointer
    i32.const -64
    i32.add
    local.tee 2
    global.set $__stack_pointer
    local.get 2
    i32.const 56
    i32.add
    i64.const 0
    i64.store
    local.get 2
    i32.const 24
    i32.add
    local.get 1
    i32.const 8
    i32.add
    local.tee 3
    i64.load align=1
    i64.store
    local.get 2
    i32.const 32
    i32.add
    local.get 1
    i32.const 16
    i32.add
    local.tee 4
    i64.load align=1
    i64.store
    local.get 2
    i32.const 40
    i32.add
    local.get 1
    i32.const 24
    i32.add
    local.tee 5
    i64.load align=1
    i64.store
    local.get 2
    i64.const 0
    i64.store offset=48
    local.get 2
    i32.const 65544
    i64.load
    i64.store offset=8
    local.get 2
    i32.const 65536
    i64.load
    i64.store
    local.get 2
    local.get 1
    i64.load align=1
    i64.store offset=16
    local.get 0
    local.get 2
    call $chacha20_update
    local.get 5
    local.get 0
    i32.const 24
    i32.add
    i64.load align=1
    i64.store align=1
    local.get 4
    local.get 0
    i32.const 16
    i32.add
    i64.load align=1
    i64.store align=1
    local.get 3
    local.get 0
    i32.const 8
    i32.add
    i64.load align=1
    i64.store align=1
    local.get 1
    local.get 0
    i64.load align=1
    i64.store align=1
    local.get 0
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const -64
    i32.sub
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 128
    i32.add
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 192
    i32.add
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 256
    i32.add
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 320
    i32.add
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 384
    i32.add
    local.get 2
    call $chacha20_update
    local.get 0
    i32.const 448
    i32.add
    local.get 2
    call $chacha20_update
    local.get 2
    i32.const -64
    i32.sub
    global.set $__stack_pointer)
  (func $chacha20_update (type 2) (param i32 i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32)
    i32.const -2
    local.set 18
    local.get 1
    i32.load offset=16
    local.tee 19
    local.set 2
    local.get 1
    i32.load
    local.tee 20
    local.set 6
    local.get 1
    i32.load offset=48
    local.tee 21
    local.set 7
    local.get 1
    i32.load offset=32
    local.tee 22
    local.set 8
    local.get 1
    i32.load offset=20
    local.tee 23
    local.set 3
    local.get 1
    i32.load offset=4
    local.tee 24
    local.set 9
    local.get 1
    i32.load offset=52
    local.tee 25
    local.set 10
    local.get 1
    i32.load offset=36
    local.tee 26
    local.set 15
    local.get 1
    i32.load offset=24
    local.tee 27
    local.set 4
    local.get 1
    i32.load offset=8
    local.tee 28
    local.set 11
    local.get 1
    i32.load offset=56
    local.tee 29
    local.set 16
    local.get 1
    i32.load offset=40
    local.tee 30
    local.set 12
    local.get 1
    i32.load offset=28
    local.tee 31
    local.set 5
    local.get 1
    i32.load offset=12
    local.tee 32
    local.set 17
    local.get 1
    i32.load offset=60
    local.tee 33
    local.set 13
    local.get 1
    i32.load offset=44
    local.tee 34
    local.set 14
    loop  ;; label = @1
      local.get 13
      local.get 5
      local.get 17
      i32.add
      local.tee 17
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 13
      local.get 14
      i32.add
      local.tee 14
      local.get 5
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 5
      local.get 17
      i32.add
      local.tee 35
      local.get 7
      local.get 2
      local.get 6
      i32.add
      local.tee 6
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 7
      local.get 8
      i32.add
      local.tee 8
      local.get 2
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 2
      local.get 6
      i32.add
      local.tee 6
      local.get 7
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 7
      local.get 8
      i32.add
      local.tee 8
      local.get 2
      i32.xor
      i32.const 7
      i32.rotl
      local.tee 2
      i32.add
      local.tee 17
      local.get 16
      local.get 4
      local.get 11
      i32.add
      local.tee 11
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 16
      local.get 12
      i32.add
      local.tee 12
      local.get 4
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 4
      local.get 11
      i32.add
      local.tee 11
      local.get 16
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 36
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 16
      local.get 10
      local.get 3
      local.get 9
      i32.add
      local.tee 9
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 10
      local.get 15
      i32.add
      local.tee 15
      local.get 3
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 3
      local.get 9
      i32.add
      local.tee 9
      local.get 10
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 10
      local.get 15
      i32.add
      local.tee 37
      i32.add
      local.tee 15
      local.get 2
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 2
      local.get 17
      i32.add
      local.tee 17
      local.get 16
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 16
      local.get 15
      i32.add
      local.tee 15
      local.get 2
      i32.xor
      i32.const 7
      i32.rotl
      local.set 2
      local.get 13
      local.get 35
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 13
      local.get 14
      i32.add
      local.tee 14
      local.get 5
      i32.xor
      i32.const 7
      i32.rotl
      local.tee 5
      local.get 11
      i32.add
      local.tee 11
      local.get 10
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 10
      local.get 8
      i32.add
      local.tee 8
      local.get 5
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 5
      local.get 11
      i32.add
      local.tee 11
      local.get 10
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 10
      local.get 8
      i32.add
      local.tee 8
      local.get 5
      i32.xor
      i32.const 7
      i32.rotl
      local.set 5
      local.get 12
      local.get 36
      i32.add
      local.tee 12
      local.get 4
      i32.xor
      i32.const 7
      i32.rotl
      local.tee 4
      local.get 9
      i32.add
      local.tee 9
      local.get 7
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 7
      local.get 14
      i32.add
      local.tee 14
      local.get 4
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 4
      local.get 9
      i32.add
      local.tee 9
      local.get 7
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 7
      local.get 14
      i32.add
      local.tee 14
      local.get 4
      i32.xor
      i32.const 7
      i32.rotl
      local.set 4
      local.get 13
      local.get 3
      local.get 37
      i32.xor
      i32.const 7
      i32.rotl
      local.tee 3
      local.get 6
      i32.add
      local.tee 6
      i32.xor
      i32.const 16
      i32.rotl
      local.tee 13
      local.get 12
      i32.add
      local.tee 12
      local.get 3
      i32.xor
      i32.const 12
      i32.rotl
      local.tee 3
      local.get 6
      i32.add
      local.tee 6
      local.get 13
      i32.xor
      i32.const 8
      i32.rotl
      local.tee 13
      local.get 12
      i32.add
      local.tee 12
      local.get 3
      i32.xor
      i32.const 7
      i32.rotl
      local.set 3
      local.get 18
      i32.const 2
      i32.add
      local.tee 18
      i32.const 18
      i32.lt_u
      br_if 0 (;@1;)
    end
    local.get 1
    local.get 7
    i32.store offset=48
    local.get 1
    local.get 6
    i32.store
    local.get 1
    local.get 2
    i32.store offset=16
    local.get 1
    local.get 8
    i32.store offset=32
    local.get 1
    local.get 3
    i32.store offset=20
    local.get 1
    local.get 10
    i32.store offset=52
    local.get 1
    local.get 9
    i32.store offset=4
    local.get 1
    local.get 15
    i32.store offset=36
    local.get 1
    local.get 4
    i32.store offset=24
    local.get 1
    local.get 16
    i32.store offset=56
    local.get 1
    local.get 11
    i32.store offset=8
    local.get 1
    local.get 12
    i32.store offset=40
    local.get 1
    local.get 5
    i32.store offset=28
    local.get 1
    local.get 13
    i32.store offset=60
    local.get 1
    local.get 17
    i32.store offset=12
    local.get 1
    local.get 14
    i32.store offset=44
    local.get 0
    local.get 13
    local.get 33
    i32.add
    i32.store offset=60 align=1
    local.get 0
    local.get 16
    local.get 29
    i32.add
    i32.store offset=56 align=1
    local.get 0
    local.get 10
    local.get 25
    i32.add
    i32.store offset=52 align=1
    local.get 0
    local.get 7
    local.get 21
    i32.add
    i32.store offset=48 align=1
    local.get 0
    local.get 14
    local.get 34
    i32.add
    i32.store offset=44 align=1
    local.get 0
    local.get 12
    local.get 30
    i32.add
    i32.store offset=40 align=1
    local.get 0
    local.get 15
    local.get 26
    i32.add
    i32.store offset=36 align=1
    local.get 0
    local.get 8
    local.get 22
    i32.add
    i32.store offset=32 align=1
    local.get 0
    local.get 5
    local.get 31
    i32.add
    i32.store offset=28 align=1
    local.get 0
    local.get 4
    local.get 27
    i32.add
    i32.store offset=24 align=1
    local.get 0
    local.get 3
    local.get 23
    i32.add
    i32.store offset=20 align=1
    local.get 0
    local.get 2
    local.get 19
    i32.add
    i32.store offset=16 align=1
    local.get 0
    local.get 17
    local.get 32
    i32.add
    i32.store offset=12 align=1
    local.get 0
    local.get 11
    local.get 28
    i32.add
    i32.store offset=8 align=1
    local.get 0
    local.get 9
    local.get 24
    i32.add
    i32.store offset=4 align=1
    local.get 0
    local.get 6
    local.get 20
    i32.add
    i32.store align=1
    local.get 1
    local.get 1
    i32.load offset=48
    i32.const 1
    i32.add
    i32.store offset=48)
  (func $arc4random (type 7) (result i32)
    (local i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 0
      i32.load
      local.set 1
      local.get 0
      i32.load offset=4
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 0
        global.set $__stack_pointer
        local.get 0
        i32.const 12
        i32.add
        local.set 1
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 1
        i32.const 4
        call $arc4random_buf
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 0
        i32.load offset=12
        local.get 0
        i32.const 16
        i32.add
        global.set $__stack_pointer
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 1
    i32.store
    local.get 2
    local.get 0
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $dummy (type 1))
  (func $__wasm_call_dtors (type 1)
    call $dummy
    call $dummy)
  (func $_*internal/reflectlite.RawType_.elem (type 5) (param i32) (result i32)
    (local i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 4
      i32.sub
      i32.store
      global.get 2
      i32.load
      i32.load
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.const 1
      local.get 0
      i32.const 3
      i32.and
      select
      i32.eqz
      if  ;; label = @2
        local.get 0
        i32.const 1
        i32.sub
        return
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        call $_*internal/reflectlite.RawType_.underlying
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        block  ;; label = @3
          local.get 0
          i32.eqz
          br_if 0 (;@3;)
          block  ;; label = @4
            local.get 0
            i32.const 3
            i32.and
            i32.eqz
            if  ;; label = @5
              local.get 0
              i32.load8_u
              i32.const 31
              i32.and
              local.tee 1
              i32.const 25
              i32.gt_u
              br_if 2 (;@3;)
              i32.const 1
              local.get 1
              i32.shl
              i32.const 46661632
              i32.and
              br_if 1 (;@4;)
              local.get 1
              i32.const 21
              i32.ne
              br_if 2 (;@3;)
            end
            local.get 0
            i32.load offset=4
            return
          end
          local.get 0
          i32.load offset=8
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        i32.const 68100
        i32.const 68316
        call $runtime._panic
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    i32.const 0)
  (func $_*internal/reflectlite.RawType_.underlying (type 5) (param i32) (result i32)
    (local i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        call $_*internal/reflectlite.RawType_.isNamed
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 1
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 1
        i32.const 1
        i32.and
        if (result i32)  ;; label = @3
          local.get 0
          i32.load offset=8
        else
          local.get 0
        end
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $runtime._panic (type 2) (param i32 i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $runtime.panicOrGoexit
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $_*internal/reflectlite.RawType_.isNamed (type 5) (param i32) (result i32)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 1
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        block  ;; label = @3
          local.get 0
          i32.const 3
          i32.and
          if (result i32)  ;; label = @4
            i32.const 0
          else
            local.get 0
            i32.eqz
            br_if 1 (;@3;)
            local.get 0
            i32.load8_u
            i32.const 32
            i32.and
            i32.const 5
            i32.shr_u
          end
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 1
      i32.eqz
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    i32.const 0)
  (func $runtime.nilPanic (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66413
        i32.const 23
        call $runtime.runtimePanicAt
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $_*internal/reflectlite.RawType_.String (type 2) (param i32 i32)
    (local i32 i32 i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 24
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 3
      i32.load
      local.set 0
      local.get 3
      i32.load offset=8
      local.set 2
      local.get 3
      i32.load offset=12
      local.set 4
      local.get 3
      i32.load offset=16
      local.set 6
      local.get 3
      i32.load offset=20
      local.set 7
      local.get 3
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 5
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        local.tee 2
        i32.const 48
        i32.sub
        local.tee 7
        global.set $__stack_pointer
      end
      global.get 1
      i32.eqz
      local.get 5
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 1
        call $_*internal/reflectlite.RawType_.isNamed
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 2
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 2
        i32.const 1
        i32.and
        i32.eqz
        local.tee 2
        i32.eqz
        if  ;; label = @3
          loop  ;; label = @4
            br 0 (;@4;)
          end
          unreachable
        end
      end
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            i32.eqz
            if  ;; label = @5
              i32.const 0
              local.set 2
              br 2 (;@3;)
            end
            local.get 1
            i32.const 3
            i32.and
            local.set 2
          end
          block  ;; label = @4
            block  ;; label = @5
              block  ;; label = @6
                block  ;; label = @7
                  block  ;; label = @8
                    block  ;; label = @9
                      block  ;; label = @10
                        block  ;; label = @11
                          global.get 1
                          i32.eqz
                          if  ;; label = @12
                            local.get 2
                            br_if 1 (;@11;)
                            i32.const 12
                            local.set 4
                            i32.const 66067
                            local.set 6
                            block  ;; label = @13
                              local.get 1
                              i32.load8_u
                              i32.const 31
                              i32.and
                              local.tee 2
                              i32.const 19
                              i32.sub
                              br_table 0 (;@13;) 11 (;@2;) 2 (;@11;) 3 (;@10;) 4 (;@9;) 10 (;@3;) 5 (;@8;) 6 (;@7;) 10 (;@3;)
                            end
                            local.get 7
                            i32.const 16
                            i32.add
                            local.set 2
                          end
                          global.get 1
                          i32.eqz
                          local.get 5
                          i32.const 1
                          i32.eq
                          i32.or
                          if  ;; label = @12
                            local.get 1
                            call $_*internal/reflectlite.RawType_.elem
                            i32.const 1
                            global.get 1
                            i32.const 1
                            i32.eq
                            br_if 11 (;@1;)
                            drop
                            local.set 4
                          end
                          global.get 1
                          i32.eqz
                          local.get 5
                          i32.const 2
                          i32.eq
                          i32.or
                          if  ;; label = @12
                            local.get 2
                            local.get 4
                            call $_*internal/reflectlite.RawType_.String
                            i32.const 2
                            global.get 1
                            i32.const 1
                            i32.eq
                            br_if 11 (;@1;)
                            drop
                          end
                          global.get 1
                          i32.eqz
                          if  ;; label = @12
                            local.get 1
                            i32.load8_u
                            i32.const 31
                            i32.and
                            i32.const 19
                            i32.ne
                            local.tee 2
                            br_if 7 (;@5;)
                            local.get 7
                            i32.load offset=20
                            local.set 2
                            local.get 7
                            i32.load offset=16
                            local.set 3
                            i32.const 4
                            local.set 4
                            i32.const 65902
                            local.set 6
                            block  ;; label = @13
                              block  ;; label = @14
                                block  ;; label = @15
                                  local.get 1
                                  i32.load16_u offset=2
                                  i32.const 1
                                  i32.sub
                                  br_table 1 (;@14;) 0 (;@15;) 2 (;@13;) 13 (;@2;)
                                end
                                local.get 2
                                i32.eqz
                                if  ;; label = @15
                                  i32.const 7
                                  local.set 4
                                  i32.const 66029
                                  local.set 6
                                  br 13 (;@2;)
                                end
                                i32.const 0
                                local.set 6
                                local.get 1
                                i32.const 66032
                                i32.load align=1
                                i32.store align=1
                                local.get 1
                                i32.const 66029
                                i32.load align=1
                                i32.store align=1
                                local.get 1
                                local.get 3
                                local.get 2
                                memory.copy
                                local.get 2
                                i32.const 7
                                i32.add
                                local.set 4
                                br 12 (;@2;)
                              end
                              local.get 2
                              i32.eqz
                              if  ;; label = @14
                                i32.const 7
                                local.set 4
                                i32.const 66036
                                local.set 6
                                br 12 (;@2;)
                              end
                              i32.const 0
                              local.set 6
                              local.get 1
                              i32.const 66039
                              i32.load align=1
                              i32.store align=1
                              local.get 1
                              i32.const 66036
                              i32.load align=1
                              i32.store align=1
                              local.get 1
                              local.get 3
                              local.get 2
                              memory.copy
                              local.get 2
                              i32.const 7
                              i32.add
                              local.set 4
                              br 11 (;@2;)
                            end
                            local.get 2
                            i32.eqz
                            local.tee 4
                            br_if 6 (;@6;)
                            local.get 3
                            i32.load8_u
                            i32.const 60
                            i32.eq
                            if  ;; label = @13
                              local.get 1
                              i32.const 66047
                              i32.load16_u align=1
                              i32.store16 align=1
                              local.get 1
                              i32.const 66043
                              i32.load align=1
                              i32.store align=1
                              local.get 1
                              local.get 3
                              local.get 2
                              memory.copy
                              i32.const 1
                              local.set 4
                              i32.const 66049
                              local.set 6
                              br 11 (;@2;)
                            end
                            i32.const 0
                            local.set 6
                            local.get 1
                            i32.const 66054
                            i32.load8_u
                            i32.store8
                            local.get 1
                            i32.const 66050
                            i32.load align=1
                            i32.store align=1
                            local.get 1
                            local.get 3
                            local.get 2
                            memory.copy
                            local.get 2
                            i32.const 5
                            i32.add
                            local.set 4
                            br 10 (;@2;)
                          end
                        end
                        local.get 2
                        local.get 7
                        i32.const 24
                        i32.add
                        global.get 1
                        select
                        local.set 2
                        global.get 1
                        i32.eqz
                        local.get 5
                        i32.const 3
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 1
                          call $_*internal/reflectlite.RawType_.elem
                          i32.const 3
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                          local.set 1
                        end
                        global.get 1
                        i32.eqz
                        local.get 5
                        i32.const 4
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 2
                          local.get 1
                          call $_*internal/reflectlite.RawType_.String
                          i32.const 4
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          i32.const 1
                          local.set 4
                          i32.const 66055
                          local.set 6
                          br 9 (;@2;)
                        end
                      end
                      local.get 2
                      local.get 7
                      i32.const 32
                      i32.add
                      global.get 1
                      select
                      local.set 2
                      global.get 1
                      i32.eqz
                      local.get 5
                      i32.const 5
                      i32.eq
                      i32.or
                      if  ;; label = @10
                        local.get 1
                        call $_*internal/reflectlite.RawType_.elem
                        i32.const 5
                        global.get 1
                        i32.const 1
                        i32.eq
                        br_if 9 (;@1;)
                        drop
                        local.set 1
                      end
                      global.get 1
                      i32.eqz
                      local.get 5
                      i32.const 6
                      i32.eq
                      i32.or
                      if  ;; label = @10
                        local.get 2
                        local.get 1
                        call $_*internal/reflectlite.RawType_.String
                        i32.const 6
                        global.get 1
                        i32.const 1
                        i32.eq
                        br_if 9 (;@1;)
                        drop
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        i32.const 2
                        local.set 4
                        i32.const 66056
                        local.set 6
                        br 8 (;@2;)
                      end
                    end
                    global.get 1
                    i32.eqz
                    local.get 5
                    i32.const 7
                    i32.eq
                    i32.or
                    if  ;; label = @9
                      local.get 1
                      call $_*internal/reflectlite.RawType_.underlying
                      i32.const 7
                      global.get 1
                      i32.const 1
                      i32.eq
                      br_if 8 (;@1;)
                      drop
                      local.set 0
                    end
                    global.get 1
                    i32.eqz
                    if  ;; label = @9
                      unreachable
                    end
                  end
                  global.get 1
                  i32.eqz
                  local.get 5
                  i32.const 8
                  i32.eq
                  i32.or
                  if  ;; label = @8
                    local.get 1
                    call $_*internal/reflectlite.RawType_.underlying
                    i32.const 8
                    global.get 1
                    i32.const 1
                    i32.eq
                    br_if 7 (;@1;)
                    drop
                    local.set 1
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 1
                    i32.eqz
                    local.tee 0
                    br_if 4 (;@4;)
                    local.get 1
                    i32.const 3
                    i32.and
                    local.tee 0
                    br_if 4 (;@4;)
                    local.get 1
                    i32.load8_u
                    i32.const 31
                    i32.and
                    i32.const 25
                    i32.ne
                    local.tee 0
                    br_if 4 (;@4;)
                    local.get 1
                    i32.load offset=12
                    local.set 1
                    local.get 7
                    i32.const 40
                    i32.add
                    local.set 0
                  end
                  global.get 1
                  i32.eqz
                  local.get 5
                  i32.const 9
                  i32.eq
                  i32.or
                  if  ;; label = @8
                    local.get 0
                    local.get 1
                    call $_*internal/reflectlite.RawType_.String
                    i32.const 9
                    global.get 1
                    i32.const 1
                    i32.eq
                    br_if 7 (;@1;)
                    drop
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    unreachable
                  end
                end
                global.get 1
                i32.eqz
                local.get 5
                i32.const 10
                i32.eq
                i32.or
                if  ;; label = @7
                  local.get 1
                  call $_*internal/reflectlite.RawType_.underlying
                  i32.const 10
                  global.get 1
                  i32.const 1
                  i32.eq
                  br_if 6 (;@1;)
                  drop
                  local.set 2
                end
                global.get 1
                i32.eqz
                if  ;; label = @7
                  local.get 2
                  i32.load16_u offset=16
                  local.tee 2
                  i32.eqz
                  if  ;; label = @8
                    i32.const 9
                    local.set 4
                    i32.const 66058
                    local.set 6
                    br 6 (;@2;)
                  end
                end
                global.get 1
                i32.eqz
                local.get 5
                i32.const 11
                i32.eq
                i32.or
                if  ;; label = @7
                  local.get 1
                  call $_*internal/reflectlite.RawType_.rawField
                  i32.const 11
                  global.get 1
                  i32.const 1
                  i32.eq
                  br_if 6 (;@1;)
                  drop
                end
                global.get 1
                i32.eqz
                if  ;; label = @7
                  unreachable
                end
              end
              global.get 1
              i32.eqz
              local.get 5
              i32.const 12
              i32.eq
              i32.or
              if  ;; label = @6
                call $runtime.lookupPanic
                i32.const 12
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              if  ;; label = @6
                unreachable
              end
            end
            global.get 1
            i32.eqz
            local.get 5
            i32.const 13
            i32.eq
            i32.or
            if  ;; label = @5
              i32.const 68100
              i32.const 68340
              call $runtime._panic
              i32.const 13
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              unreachable
            end
          end
          global.get 1
          i32.eqz
          local.get 5
          i32.const 14
          i32.eq
          i32.or
          if  ;; label = @4
            i32.const 68100
            i32.const 68324
            call $runtime._panic
            i32.const 14
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            unreachable
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 7
          i32.const 8
          i32.add
          local.get 2
          call $_internal/reflectlite.Kind_.String
          local.get 7
          i32.load offset=8
          local.set 6
          local.get 7
          i32.load offset=12
          local.set 4
        end
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 0
        local.get 6
        i32.store
        local.get 0
        local.get 4
        i32.store offset=4
        local.get 7
        i32.const 48
        i32.add
        global.set $__stack_pointer
      end
      return
    end
    local.set 3
    global.get 2
    i32.load
    local.get 3
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 3
    local.get 0
    i32.store
    local.get 3
    local.get 1
    i32.store offset=4
    local.get 3
    local.get 2
    i32.store offset=8
    local.get 3
    local.get 4
    i32.store offset=12
    local.get 3
    local.get 6
    i32.store offset=16
    local.get 3
    local.get 7
    i32.store offset=20
    global.get 2
    global.get 2
    i32.load
    i32.const 24
    i32.add
    i32.store)
  (func $_*internal/reflectlite.RawType_.rawField (type 0) (param i32)
    (local i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 4
      i32.sub
      i32.store
      global.get 2
      i32.load
      i32.load
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 1
      end
      i32.const 1
      local.get 0
      global.get 1
      select
      i32.eqz
      local.set 2
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 2
            local.get 0
            i32.const 3
            i32.and
            i32.or
            br_if 1 (;@3;)
            local.get 0
            i32.load8_u
            i32.const 31
            i32.and
            i32.const 26
            i32.ne
            br_if 1 (;@3;)
          end
          global.get 1
          i32.eqz
          local.get 1
          i32.eqz
          i32.or
          if  ;; label = @4
            local.get 0
            call $_*internal/reflectlite.RawType_.underlying
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
            local.set 0
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 0
            i32.load16_u offset=16
            i32.eqz
            br_if 2 (;@2;)
            local.get 0
            i32.load offset=24
            i32.const 1
            i32.add
            local.tee 2
            if  ;; label = @5
              i32.const 0
              local.set 0
              loop  ;; label = @6
                local.get 0
                i32.const 5
                i32.ne
                if  ;; label = @7
                  local.get 0
                  local.get 2
                  i32.add
                  local.get 0
                  i32.const 1
                  i32.add
                  local.set 0
                  i32.load8_s
                  i32.const 0
                  i32.lt_s
                  br_if 1 (;@6;)
                end
              end
              loop  ;; label = @6
                br 0 (;@6;)
              end
              unreachable
            end
          end
          global.get 1
          i32.eqz
          local.get 1
          i32.const 1
          i32.eq
          i32.or
          if  ;; label = @4
            call $runtime.unsafeSlicePanic
            i32.const 1
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            unreachable
          end
        end
        global.get 1
        i32.eqz
        local.get 1
        i32.const 2
        i32.eq
        i32.or
        if  ;; label = @3
          i32.const 68100
          i32.const 68332
          call $runtime._panic
          i32.const 2
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          unreachable
        end
      end
      global.get 1
      i32.eqz
      local.get 1
      i32.const 3
      i32.eq
      i32.or
      if  ;; label = @2
        i32.const 67760
        i32.const 66112
        call $runtime._panic
        i32.const 3
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.lookupPanic (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66466
        i32.const 18
        call $runtime.runtimePanicAt
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $_internal/reflectlite.Kind_.String (type 2) (param i32 i32)
    (local i32 i32)
    i32.const 7
    local.set 3
    i32.const 65782
    local.set 2
    block  ;; label = @1
      block  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            block  ;; label = @5
              block  ;; label = @6
                block  ;; label = @7
                  block  ;; label = @8
                    block  ;; label = @9
                      block  ;; label = @10
                        block  ;; label = @11
                          block  ;; label = @12
                            block  ;; label = @13
                              block  ;; label = @14
                                block  ;; label = @15
                                  block  ;; label = @16
                                    block  ;; label = @17
                                      block  ;; label = @18
                                        block  ;; label = @19
                                          block  ;; label = @20
                                            block  ;; label = @21
                                              block  ;; label = @22
                                                block  ;; label = @23
                                                  block  ;; label = @24
                                                    block  ;; label = @25
                                                      block  ;; label = @26
                                                        block  ;; label = @27
                                                          local.get 1
                                                          i32.const 255
                                                          i32.and
                                                          i32.const 1
                                                          i32.sub
                                                          br_table 0 (;@27;) 1 (;@26;) 2 (;@25;) 3 (;@24;) 4 (;@23;) 5 (;@22;) 6 (;@21;) 7 (;@20;) 8 (;@19;) 9 (;@18;) 10 (;@17;) 11 (;@16;) 12 (;@15;) 13 (;@14;) 14 (;@13;) 15 (;@12;) 16 (;@11;) 17 (;@10;) 18 (;@9;) 19 (;@8;) 20 (;@7;) 21 (;@6;) 22 (;@5;) 23 (;@4;) 24 (;@3;) 25 (;@2;) 26 (;@1;)
                                                        end
                                                        i32.const 4
                                                        local.set 3
                                                        i32.const 65789
                                                        local.set 2
                                                        br 25 (;@1;)
                                                      end
                                                      i32.const 3
                                                      local.set 3
                                                      i32.const 65793
                                                      local.set 2
                                                      br 24 (;@1;)
                                                    end
                                                    i32.const 4
                                                    local.set 3
                                                    i32.const 65796
                                                    local.set 2
                                                    br 23 (;@1;)
                                                  end
                                                  i32.const 5
                                                  local.set 3
                                                  i32.const 65800
                                                  local.set 2
                                                  br 22 (;@1;)
                                                end
                                                i32.const 5
                                                local.set 3
                                                i32.const 65805
                                                local.set 2
                                                br 21 (;@1;)
                                              end
                                              i32.const 5
                                              local.set 3
                                              i32.const 65810
                                              local.set 2
                                              br 20 (;@1;)
                                            end
                                            i32.const 4
                                            local.set 3
                                            i32.const 65815
                                            local.set 2
                                            br 19 (;@1;)
                                          end
                                          i32.const 5
                                          local.set 3
                                          i32.const 65819
                                          local.set 2
                                          br 18 (;@1;)
                                        end
                                        i32.const 6
                                        local.set 3
                                        i32.const 65824
                                        local.set 2
                                        br 17 (;@1;)
                                      end
                                      i32.const 6
                                      local.set 3
                                      i32.const 65830
                                      local.set 2
                                      br 16 (;@1;)
                                    end
                                    i32.const 6
                                    local.set 3
                                    i32.const 65836
                                    local.set 2
                                    br 15 (;@1;)
                                  end
                                  i32.const 65842
                                  local.set 2
                                  br 14 (;@1;)
                                end
                                i32.const 65849
                                local.set 2
                                br 13 (;@1;)
                              end
                              i32.const 65856
                              local.set 2
                              br 12 (;@1;)
                            end
                            i32.const 9
                            local.set 3
                            i32.const 65863
                            local.set 2
                            br 11 (;@1;)
                          end
                          i32.const 10
                          local.set 3
                          i32.const 65872
                          local.set 2
                          br 10 (;@1;)
                        end
                        i32.const 6
                        local.set 3
                        i32.const 65882
                        local.set 2
                        br 9 (;@1;)
                      end
                      i32.const 14
                      local.set 3
                      i32.const 65888
                      local.set 2
                      br 8 (;@1;)
                    end
                    i32.const 4
                    local.set 3
                    i32.const 65902
                    local.set 2
                    br 7 (;@1;)
                  end
                  i32.const 9
                  local.set 3
                  i32.const 65906
                  local.set 2
                  br 6 (;@1;)
                end
                i32.const 3
                local.set 3
                i32.const 65915
                local.set 2
                br 5 (;@1;)
              end
              i32.const 5
              local.set 3
              i32.const 65918
              local.set 2
              br 4 (;@1;)
            end
            i32.const 5
            local.set 3
            i32.const 65923
            local.set 2
            br 3 (;@1;)
          end
          i32.const 4
          local.set 3
          i32.const 65928
          local.set 2
          br 2 (;@1;)
        end
        i32.const 3
        local.set 3
        i32.const 65932
        local.set 2
        br 1 (;@1;)
      end
      i32.const 6
      local.set 3
      i32.const 65935
      local.set 2
    end
    local.get 0
    local.get 2
    i32.store
    local.get 0
    local.get 3
    i32.store offset=4)
  (func $runtime.unsafeSlicePanic (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66502
        i32.const 37
        call $runtime.runtimePanicAt
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $_internal/reflectlite.Value_.String (type 8) (param i32 i32 i32)
    (local i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 3
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 4
        global.set $__stack_pointer
        block  ;; label = @3
          local.get 1
          i32.eqz
          local.get 1
          i32.const 3
          i32.and
          i32.or
          br_if 0 (;@3;)
          local.get 1
          i32.load8_u
          i32.const 31
          i32.and
          i32.const 17
          i32.ne
          br_if 0 (;@3;)
          local.get 0
          local.get 2
          i64.load align=4
          i64.store
          local.get 4
          i32.const 16
          i32.add
          global.set $__stack_pointer
          return
        end
        local.get 4
        i32.const 8
        i32.add
        local.set 0
      end
      global.get 1
      i32.eqz
      local.get 3
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $_*internal/reflectlite.RawType_.String
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $_*internal/task.Mutex_.Unlock (type 0) (param i32)
    (local i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      local.get 1
      local.get 0
      i32.eqz
      global.get 1
      select
      local.set 1
      block  ;; label = @2
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 1
          br_if 1 (;@2;)
          local.get 0
          i32.load8_u
          i32.eqz
          local.set 1
        end
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            br_if 1 (;@3;)
            local.get 0
            i32.load offset=4
            local.tee 1
            i32.eqz
            local.set 3
          end
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 3
              br_if 1 (;@4;)
              local.get 0
              local.get 1
              i32.load
              i32.store offset=4
              local.get 1
              i32.const 0
              i32.store
            end
            global.get 1
            i32.eqz
            local.get 2
            i32.eqz
            i32.or
            if  ;; label = @5
              local.get 1
              call $runtime.scheduleTask
              i32.const 0
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              return
            end
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 0
            i32.const 0
            i32.store8
            return
          end
        end
        global.get 1
        i32.eqz
        local.get 2
        i32.const 1
        i32.eq
        i32.or
        if  ;; label = @3
          i32.const 67760
          i32.const 66312
          call $runtime._panic
          i32.const 1
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          unreachable
        end
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $runtime.scheduleTask (type 0) (param i32)
    (local i32 i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 1
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 69044
        i32.load
        local.tee 2
        if  ;; label = @3
          local.get 2
          local.get 0
          i32.store
        end
        i32.const 69044
        local.get 0
        i32.store
        local.get 0
        if  ;; label = @3
          local.get 0
          i32.const 0
          i32.store
          i32.const 69040
          i32.load
          i32.eqz
          if  ;; label = @4
            i32.const 69040
            local.get 0
            i32.store
          end
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 1
      i32.eqz
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.memequal (type 4) (param i32 i32 i32 i32) (result i32)
    (local i32 i32 i32)
    block (result i32)  ;; label = @1
      loop  ;; label = @2
        local.get 2
        local.get 2
        local.get 4
        i32.eq
        br_if 1 (;@1;)
        drop
        local.get 1
        local.get 4
        i32.add
        local.set 5
        local.get 0
        local.get 4
        i32.add
        local.get 4
        i32.const 1
        i32.add
        local.set 4
        i32.load8_u
        local.get 5
        i32.load8_u
        i32.eq
        br_if 0 (;@2;)
      end
      local.get 4
      i32.const 1
      i32.sub
    end
    local.tee 4
    local.get 2
    i32.ge_u)
  (func $runtime.hash32 (type 4) (param i32 i32 i32 i32) (result i32)
    (local i32 i32 i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 4
      end
      global.get 1
      local.get 0
      i32.eqz
      local.get 1
      i32.const 0
      i32.ne
      i32.and
      local.get 1
      i32.const 0
      i32.lt_s
      i32.or
      i32.or
      i32.eqz
      if  ;; label = @2
        local.get 1
        i32.const 2147483644
        i32.and
        local.set 5
        local.get 1
        i32.const -962287725
        i32.mul
        local.get 2
        i32.xor
        i32.const -1130422988
        i32.xor
        local.set 4
        local.get 0
        local.set 3
        local.get 1
        local.set 2
        loop  ;; label = @3
          local.get 2
          i32.const 4
          i32.ge_u
          if  ;; label = @4
            local.get 3
            i32.load align=1
            local.get 4
            i32.add
            i32.const -962287725
            i32.mul
            local.tee 4
            i32.const 16
            i32.shr_u
            local.set 6
            local.get 4
            local.get 6
            i32.xor
            local.set 4
            local.get 2
            i32.const 4
            i32.sub
            local.set 2
            local.get 3
            i32.const 4
            i32.add
            local.set 3
            br 1 (;@3;)
          end
        end
        local.get 0
        local.get 5
        i32.add
        local.set 2
        block  ;; label = @3
          block  ;; label = @4
            block  ;; label = @5
              block  ;; label = @6
                local.get 1
                i32.const 3
                i32.and
                i32.const 1
                i32.sub
                br_table 2 (;@4;) 1 (;@5;) 0 (;@6;) 3 (;@3;)
              end
              local.get 4
              local.get 2
              i32.load8_u offset=2
              i32.const 16
              i32.shl
              i32.add
              local.set 4
            end
            local.get 4
            local.get 2
            i32.load8_u offset=1
            i32.const 8
            i32.shl
            i32.add
            local.set 4
          end
          local.get 4
          local.get 2
          i32.load8_u
          i32.add
          i32.const -962287725
          i32.mul
          local.tee 2
          i32.const 24
          i32.shr_u
          local.get 2
          i32.xor
          local.set 4
        end
        local.get 4
        return
      end
      global.get 1
      i32.eqz
      local.get 4
      i32.eqz
      i32.or
      if  ;; label = @2
        call $runtime.unsafeSlicePanic
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    i32.const 0)
  (func $runtime.runtimePanicAt (type 2) (param i32 i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66391
        i32.const 22
        call $runtime.printstring
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $runtime.printstring
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.printnl
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $runtime.slicePanic (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66484
        i32.const 18
        call $runtime.runtimePanicAt
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.printstring (type 2) (param i32 i32)
    (local i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 12
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 2
      i32.load
      local.set 0
      local.get 2
      i32.load offset=4
      local.set 1
      local.get 2
      i32.load offset=8
      local.set 2
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 3
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 1
        i32.const 0
        local.get 1
        i32.const 0
        i32.gt_s
        local.tee 2
        select
        local.set 1
      end
      loop  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            i32.eqz
            br_if 1 (;@3;)
            local.get 0
            i32.load8_u
            local.set 2
          end
          global.get 1
          i32.eqz
          local.get 3
          i32.eqz
          i32.or
          if  ;; label = @4
            local.get 2
            call $runtime.putchar
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            i32.const 1
            i32.sub
            local.set 1
            local.get 0
            i32.const 1
            i32.add
            local.set 0
            br 2 (;@2;)
          end
        end
      end
      return
    end
    local.set 3
    global.get 2
    i32.load
    local.get 3
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 3
    local.get 0
    i32.store
    local.get 3
    local.get 1
    i32.store offset=4
    local.get 3
    local.get 2
    i32.store offset=8
    global.get 2
    global.get 2
    i32.load
    i32.const 12
    i32.add
    i32.store)
  (func $runtime.printnl (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 10
        call $runtime.putchar
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.putchar (type 0) (param i32)
    (local i32 i32 i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 68908
        i32.load
        local.tee 3
        i32.const 119
        i32.gt_u
        local.set 1
      end
      block  ;; label = @2
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 1
          br_if 1 (;@2;)
          i32.const 68908
          local.get 3
          i32.const 1
          i32.add
          local.tee 1
          i32.store
          local.get 3
          i32.const 68912
          i32.add
          local.get 0
          i32.store8
          local.get 0
          i32.const 255
          i32.and
          i32.const 10
          i32.eq
          local.set 0
        end
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 0
            i32.eqz
            local.get 3
            i32.const 119
            i32.ne
            i32.and
            br_if 1 (;@3;)
            i32.const 68272
            local.get 1
            i32.store
          end
          global.get 1
          i32.eqz
          local.get 2
          i32.eqz
          i32.or
          if  ;; label = @4
            i32.const 1
            i32.const 68268
            i32.const 1
            i32.const 69036
            call $runtime.fd_write
            drop
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            i32.const 68908
            i32.const 0
            i32.store
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.lookupPanic
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.hashmapBinaryGet (type 4) (param i32 i32 i32 i32) (result i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 48
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 4
      i32.load
      local.set 0
      local.get 4
      i32.load offset=8
      local.set 2
      local.get 4
      i32.load offset=12
      local.set 3
      local.get 4
      i32.load offset=16
      local.set 5
      local.get 4
      i32.load offset=20
      local.set 6
      local.get 4
      i32.load offset=24
      local.set 7
      local.get 4
      i32.load offset=28
      local.set 8
      local.get 4
      i32.load offset=32
      local.set 10
      local.get 4
      i32.load offset=36
      local.set 11
      local.get 4
      i32.load offset=40
      local.set 12
      local.get 4
      i32.load offset=44
      local.set 13
      local.get 4
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 9
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 0
        i32.eqz
        if  ;; label = @3
          local.get 2
          i32.const 0
          local.get 3
          memory.fill
          i32.const 0
          return
        end
        local.get 0
        i32.load offset=12
        local.set 6
        local.get 0
        i32.load offset=4
        local.set 5
      end
      global.get 1
      i32.eqz
      local.get 9
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 1
        local.get 6
        local.get 5
        local.get 3
        call $runtime.hash32
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 3
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 1
        local.get 3
        i32.const 24
        i32.shr_u
        local.get 3
        i32.const 16777216
        i32.lt_u
        local.tee 5
        select
        local.set 10
        local.get 0
        local.get 3
        call $runtime.hashmapBucketAddrForHash
        local.set 6
      end
      block  ;; label = @2
        loop  ;; label = @3
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 6
              i32.eqz
              br_if 1 (;@4;)
              local.get 6
              i32.const 12
              i32.add
              local.set 11
              i32.const 0
              local.set 3
            end
            loop  ;; label = @5
              block  ;; label = @6
                global.get 1
                i32.eqz
                if  ;; label = @7
                  local.get 3
                  i32.const 8
                  i32.eq
                  local.tee 5
                  br_if 1 (;@6;)
                  local.get 10
                  local.get 3
                  local.get 6
                  i32.add
                  i32.load8_u
                  i32.ne
                  local.set 5
                end
                block  ;; label = @7
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 5
                    br_if 1 (;@7;)
                    local.get 0
                    i32.load offset=28
                    local.tee 7
                    i32.eqz
                    br_if 6 (;@2;)
                    local.get 0
                    i32.load offset=16
                    local.set 12
                    local.get 0
                    i32.load offset=24
                    local.set 13
                    local.get 11
                    local.get 0
                    i32.load offset=12
                    local.tee 5
                    local.get 3
                    i32.mul
                    i32.add
                    local.set 8
                  end
                  global.get 1
                  i32.eqz
                  local.get 9
                  i32.const 1
                  i32.eq
                  i32.or
                  if  ;; label = @8
                    local.get 1
                    local.get 8
                    local.get 5
                    local.get 13
                    local.get 7
                    call_indirect (type 4)
                    i32.const 1
                    global.get 1
                    i32.const 1
                    i32.eq
                    br_if 7 (;@1;)
                    drop
                    local.set 7
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 7
                    i32.const 1
                    i32.and
                    i32.eqz
                    local.tee 7
                    br_if 1 (;@7;)
                    local.get 2
                    local.get 6
                    local.get 5
                    i32.const 3
                    i32.shl
                    i32.add
                    local.get 3
                    local.get 12
                    i32.mul
                    i32.add
                    i32.const 12
                    i32.add
                    local.get 0
                    i32.load offset=16
                    memory.copy
                    i32.const 1
                    return
                  end
                end
                global.get 1
                i32.eqz
                if  ;; label = @7
                  local.get 3
                  i32.const 1
                  i32.add
                  local.set 3
                  br 2 (;@5;)
                end
              end
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 6
              i32.load offset=8
              local.set 6
              br 2 (;@3;)
            end
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 2
          i32.const 0
          local.get 0
          i32.load offset=16
          memory.fill
          i32.const 0
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 9
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 4
    global.get 2
    i32.load
    local.get 4
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 4
    local.get 0
    i32.store
    local.get 4
    local.get 1
    i32.store offset=4
    local.get 4
    local.get 2
    i32.store offset=8
    local.get 4
    local.get 3
    i32.store offset=12
    local.get 4
    local.get 5
    i32.store offset=16
    local.get 4
    local.get 6
    i32.store offset=20
    local.get 4
    local.get 7
    i32.store offset=24
    local.get 4
    local.get 8
    i32.store offset=28
    local.get 4
    local.get 10
    i32.store offset=32
    local.get 4
    local.get 11
    i32.store offset=36
    local.get 4
    local.get 12
    i32.store offset=40
    local.get 4
    local.get 13
    i32.store offset=44
    global.get 2
    global.get 2
    i32.load
    i32.const 48
    i32.add
    i32.store
    i32.const 0)
  (func $runtime.hashmapBucketAddrForHash (type 3) (param i32 i32) (result i32)
    local.get 0
    i32.load
    local.get 0
    i32.load offset=16
    local.get 0
    i32.load offset=12
    i32.add
    i32.const 3
    i32.shl
    i32.const 12
    i32.add
    i32.const -1
    i32.const -1
    local.get 0
    i32.load8_u offset=20
    local.tee 0
    i32.shl
    i32.const -1
    i32.xor
    local.get 0
    i32.const 31
    i32.gt_u
    select
    local.get 1
    i32.and
    i32.mul
    i32.add)
  (func $runtime.nilMapPanic (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66436
        i32.const 30
        call $runtime.runtimePanicAt
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.printint32 (type 0) (param i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 4
      i32.sub
      i32.store
      global.get 2
      i32.load
      i32.load
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 1
      end
      global.get 1
      i32.eqz
      i32.const 0
      local.get 0
      i32.const 0
      i32.ge_s
      global.get 1
      select
      i32.and
      i32.eqz
      if  ;; label = @2
        global.get 1
        i32.eqz
        local.get 1
        i32.eqz
        i32.or
        if  ;; label = @3
          i32.const 45
          call $runtime.putchar
          i32.const 0
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        local.get 0
        i32.const 0
        local.get 0
        i32.sub
        global.get 1
        select
        local.set 0
      end
      global.get 1
      i32.eqz
      local.get 1
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        local.get 0
        call $runtime.printuint32
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      return
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $runtime.printuint32 (type 0) (param i32)
    (local i32 i64)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if (result i64)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 12
        i32.sub
        i32.store
        global.get 2
        i32.load
        local.tee 1
        i32.load
        local.set 0
        local.get 1
        i64.load offset=4 align=4
      else
        i64.const 0
      end
      local.get 0
      i64.extend_i32_u
      global.get 1
      select
      local.set 2
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 2
        call $runtime.printuint64
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      return
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 1
    local.get 0
    i32.store
    local.get 1
    local.get 2
    i64.store offset=4 align=4
    global.get 2
    global.get 2
    i32.load
    i32.const 12
    i32.add
    i32.store)
  (func $runtime.printuint64 (type 9) (param i64)
    (local i32 i32 i32 i32 i32 i64)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 24
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i64.load align=4
      local.set 0
      local.get 1
      i32.load offset=8
      local.set 2
      local.get 1
      i32.load offset=12
      local.set 3
      local.get 1
      i32.load offset=16
      local.set 4
      local.get 1
      i32.load offset=20
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 5
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 32
        i32.sub
        local.tee 1
        global.set $__stack_pointer
        local.get 1
        i32.const 24
        i32.add
        i32.const 0
        i32.store
        local.get 1
        i32.const 16
        i32.add
        i64.const 0
        i64.store
        local.get 1
        i64.const 0
        i64.store offset=8
        i32.const 19
        local.set 3
        i32.const 19
        local.set 2
      end
      loop  ;; label = @2
        local.get 4
        local.get 3
        i32.const 0
        i32.ge_s
        global.get 1
        select
        local.set 4
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 4
            br_if 1 (;@3;)
            i32.const 20
            local.get 2
            local.get 2
            i32.const 20
            i32.le_s
            select
            local.get 2
            i32.sub
            local.set 3
            local.get 1
            i32.const 8
            i32.add
            local.tee 4
            local.get 2
            i32.add
            local.set 2
          end
          loop  ;; label = @4
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 3
                i32.eqz
                br_if 1 (;@5;)
                local.get 2
                i32.load8_u
                local.set 4
              end
              global.get 1
              i32.eqz
              local.get 5
              i32.eqz
              i32.or
              if  ;; label = @6
                local.get 4
                call $runtime.putchar
                i32.const 0
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 3
                i32.const 1
                i32.sub
                local.set 3
                local.get 2
                i32.const 1
                i32.add
                local.set 2
                br 2 (;@4;)
              end
            end
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            i32.const 32
            i32.add
            global.set $__stack_pointer
            return
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 1
          i32.const 8
          i32.add
          local.get 3
          i32.add
          local.get 0
          local.get 0
          i64.const 10
          i64.div_u
          local.tee 6
          i64.const 10
          i64.mul
          i64.sub
          local.tee 0
          i32.wrap_i64
          i32.const 48
          i32.or
          i32.store8
          local.get 2
          local.get 3
          local.get 0
          i64.eqz
          local.tee 4
          select
          local.set 2
          local.get 3
          i32.const 1
          i32.sub
          local.set 3
          local.get 6
          local.set 0
          br 1 (;@2;)
        end
      end
      return
    end
    local.set 5
    global.get 2
    i32.load
    local.get 5
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 5
    local.get 0
    i64.store align=4
    local.get 5
    local.get 2
    i32.store offset=8
    local.get 5
    local.get 3
    i32.store offset=12
    local.get 5
    local.get 4
    i32.store offset=16
    local.get 5
    local.get 1
    i32.store offset=20
    global.get 2
    global.get 2
    i32.load
    i32.const 24
    i32.add
    i32.store)
  (func $malloc (type 5) (param i32) (result i32)
    (local i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 1
        global.set $__stack_pointer
        local.get 0
        i32.eqz
        local.set 3
      end
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 3
            br_if 1 (;@3;)
            local.get 0
            i32.const 0
            i32.lt_s
            br_if 2 (;@2;)
            local.get 1
            local.get 0
            i32.store offset=8
            local.get 1
            local.get 0
            i32.store offset=4
            local.get 1
            i32.const 12
            i32.add
            local.set 0
          end
          global.get 1
          i32.eqz
          local.get 2
          i32.eqz
          i32.or
          if  ;; label = @4
            i32.const 68276
            local.get 0
            local.get 1
            call $runtime.hashmapBinarySet
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 1
          i32.const 16
          i32.add
          global.set $__stack_pointer
          i32.const 0
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.slicePanic
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $runtime.hashmapBinarySet (type 8) (param i32 i32 i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 68
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 3
      i32.load
      local.set 0
      local.get 3
      i32.load offset=8
      local.set 2
      local.get 3
      i32.load offset=12
      local.set 4
      local.get 3
      i32.load offset=16
      local.set 5
      local.get 3
      i32.load offset=20
      local.set 6
      local.get 3
      i32.load offset=24
      local.set 7
      local.get 3
      i32.load offset=28
      local.set 8
      local.get 3
      i32.load offset=32
      local.set 10
      local.get 3
      i32.load offset=36
      local.set 9
      local.get 3
      i32.load offset=40
      local.set 12
      local.get 3
      i32.load offset=44
      local.set 13
      local.get 3
      i32.load offset=48
      local.set 14
      local.get 3
      i32.load offset=52
      local.set 15
      local.get 3
      i32.load offset=56
      local.set 16
      local.get 3
      i32.load offset=60
      local.set 17
      local.get 3
      i32.load offset=64
      local.set 18
      local.get 3
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 11
      end
      local.get 4
      local.get 0
      i32.eqz
      global.get 1
      select
      local.set 4
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 4
            br_if 1 (;@3;)
            local.get 0
            i32.load offset=4
            local.set 6
            local.get 0
            i32.load offset=12
            local.set 4
          end
          global.get 1
          i32.eqz
          local.get 11
          i32.eqz
          i32.or
          if  ;; label = @4
            local.get 1
            local.get 4
            local.get 6
            local.get 5
            call $runtime.hash32
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
            local.set 5
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            i32.const 1
            local.get 5
            i32.const 24
            i32.shr_u
            local.tee 4
            local.get 5
            i32.const 16777216
            i32.lt_u
            select
            local.set 13
            i32.const 0
            local.set 7
            i32.const 0
            local.set 10
            i32.const 0
            local.set 8
            local.get 0
            local.get 5
            call $runtime.hashmapBucketAddrForHash
            local.set 6
          end
          loop  ;; label = @4
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 6
                i32.eqz
                br_if 1 (;@5;)
                local.get 6
                i32.const 12
                i32.add
                local.set 14
                i32.const 0
                local.set 5
              end
              loop  ;; label = @6
                block  ;; label = @7
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 5
                    i32.const 8
                    i32.eq
                    local.tee 4
                    br_if 1 (;@7;)
                    local.get 14
                    local.get 5
                    local.get 0
                    i32.load offset=12
                    local.tee 4
                    i32.mul
                    i32.add
                    local.set 15
                    local.get 14
                    local.get 4
                    i32.const 3
                    i32.shl
                    i32.add
                    local.get 0
                    i32.load offset=16
                    local.get 5
                    i32.mul
                    i32.add
                    local.set 12
                    local.get 5
                    local.get 6
                    i32.add
                    local.tee 17
                    i32.load8_u
                    local.tee 18
                    local.get 13
                    i32.ne
                    local.set 9
                  end
                  block  ;; label = @8
                    global.get 1
                    i32.eqz
                    if  ;; label = @9
                      local.get 9
                      br_if 1 (;@8;)
                      local.get 0
                      i32.load offset=28
                      local.tee 9
                      i32.eqz
                      br_if 7 (;@2;)
                      local.get 0
                      i32.load offset=24
                      local.set 16
                    end
                    global.get 1
                    i32.eqz
                    local.get 11
                    i32.const 1
                    i32.eq
                    i32.or
                    if  ;; label = @9
                      local.get 1
                      local.get 15
                      local.get 4
                      local.get 16
                      local.get 9
                      call_indirect (type 4)
                      i32.const 1
                      global.get 1
                      i32.const 1
                      i32.eq
                      br_if 8 (;@1;)
                      drop
                      local.set 4
                    end
                    global.get 1
                    i32.eqz
                    if  ;; label = @9
                      local.get 4
                      i32.const 1
                      i32.and
                      i32.eqz
                      local.tee 4
                      br_if 1 (;@8;)
                      local.get 12
                      local.get 2
                      local.get 0
                      i32.load offset=16
                      memory.copy
                      return
                    end
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 8
                    local.get 17
                    local.get 7
                    local.get 18
                    i32.or
                    local.tee 4
                    select
                    local.set 8
                    local.get 7
                    local.get 15
                    local.get 4
                    select
                    local.set 7
                    local.get 10
                    local.get 12
                    local.get 4
                    select
                    local.set 10
                    local.get 5
                    i32.const 1
                    i32.add
                    local.set 5
                    br 2 (;@6;)
                  end
                end
              end
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 6
                i32.load offset=8
                local.set 6
                br 2 (;@4;)
              end
            end
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 0
            local.get 0
            i32.load offset=8
            i32.const 1
            i32.add
            i32.store offset=8
            local.get 7
            local.get 1
            local.get 0
            i32.load offset=12
            memory.copy
            local.get 10
            local.get 2
            local.get 0
            i32.load offset=16
            memory.copy
            local.get 8
            i32.eqz
            br_if 2 (;@2;)
            local.get 8
            local.get 13
            i32.store8
            return
          end
        end
        global.get 1
        i32.eqz
        local.get 11
        i32.const 2
        i32.eq
        i32.or
        if  ;; label = @3
          call $runtime.nilMapPanic
          i32.const 2
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          unreachable
        end
      end
      global.get 1
      i32.eqz
      local.get 11
      i32.const 3
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 3
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 3
    global.get 2
    i32.load
    local.get 3
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 3
    local.get 0
    i32.store
    local.get 3
    local.get 1
    i32.store offset=4
    local.get 3
    local.get 2
    i32.store offset=8
    local.get 3
    local.get 4
    i32.store offset=12
    local.get 3
    local.get 5
    i32.store offset=16
    local.get 3
    local.get 6
    i32.store offset=20
    local.get 3
    local.get 7
    i32.store offset=24
    local.get 3
    local.get 8
    i32.store offset=28
    local.get 3
    local.get 10
    i32.store offset=32
    local.get 3
    local.get 9
    i32.store offset=36
    local.get 3
    local.get 12
    i32.store offset=40
    local.get 3
    local.get 13
    i32.store offset=44
    local.get 3
    local.get 14
    i32.store offset=48
    local.get 3
    local.get 15
    i32.store offset=52
    local.get 3
    local.get 16
    i32.store offset=56
    local.get 3
    local.get 17
    i32.store offset=60
    local.get 3
    local.get 18
    i32.store offset=64
    global.get 2
    global.get 2
    i32.load
    i32.const 68
    i32.add
    i32.store)
  (func $free (type 0) (param i32)
    (local i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 12
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 2
      i32.load
      local.set 0
      local.get 2
      i32.load offset=4
      local.set 1
      local.get 2
      i32.load offset=8
      local.set 3
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 4
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 3
        global.set $__stack_pointer
        local.get 0
        i32.eqz
        local.set 1
      end
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            br_if 1 (;@3;)
            local.get 3
            local.get 0
            i32.store offset=12
            local.get 3
            i32.const 12
            i32.add
            local.set 1
          end
          global.get 1
          i32.eqz
          local.get 4
          i32.eqz
          i32.or
          if  ;; label = @4
            i32.const 68276
            local.get 1
            local.get 3
            i32.const 12
            call $runtime.hashmapBinaryGet
            i32.const 0
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
            local.set 1
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 1
            i32.const 1
            i32.and
            i32.eqz
            br_if 2 (;@2;)
            local.get 3
            local.get 0
            i32.store
          end
          global.get 1
          i32.eqz
          local.get 4
          i32.const 1
          i32.eq
          i32.or
          if  ;; label = @4
            local.get 3
            call $runtime.hashmapBinaryDelete
            i32.const 1
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          local.get 3
          i32.const 16
          i32.add
          global.set $__stack_pointer
          return
        end
      end
      global.get 1
      i32.eqz
      local.get 4
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        i32.const 67760
        i32.const 66344
        call $runtime._panic
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    local.get 2
    local.get 3
    i32.store offset=8
    global.get 2
    global.get 2
    i32.load
    i32.const 12
    i32.add
    i32.store)
  (func $runtime.hashmapBinaryDelete (type 0) (param i32)
    (local i32 i32 i32 i32 i32 i32 i32 i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 40
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 3
      local.get 1
      i32.load offset=12
      local.set 4
      local.get 1
      i32.load offset=16
      local.set 5
      local.get 1
      i32.load offset=20
      local.set 6
      local.get 1
      i32.load offset=24
      local.set 8
      local.get 1
      i32.load offset=28
      local.set 9
      local.get 1
      i32.load offset=32
      local.set 10
      local.get 1
      i32.load offset=36
      local.set 11
      local.get 1
      i32.load offset=8
      local.set 2
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 7
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 68280
        i32.load
        local.set 5
        i32.const 68288
        i32.load
        local.set 3
      end
      global.get 1
      i32.eqz
      local.get 7
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 3
        local.get 5
        local.get 2
        call $runtime.hash32
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 2
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 1
        local.get 2
        i32.const 24
        i32.shr_u
        local.get 2
        i32.const 16777216
        i32.lt_u
        local.tee 5
        select
        local.set 8
        i32.const 68276
        local.get 2
        call $runtime.hashmapBucketAddrForHash
        local.set 3
      end
      block  ;; label = @2
        loop  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 3
            i32.eqz
            br_if 2 (;@2;)
            local.get 3
            i32.const 12
            i32.add
            local.set 9
            i32.const 0
            local.set 2
          end
          block  ;; label = @4
            loop  ;; label = @5
              block  ;; label = @6
                global.get 1
                i32.eqz
                if  ;; label = @7
                  local.get 2
                  i32.const 8
                  i32.eq
                  local.tee 5
                  br_if 1 (;@6;)
                  local.get 8
                  local.get 2
                  local.get 3
                  i32.add
                  local.tee 5
                  i32.load8_u
                  i32.ne
                  local.set 4
                end
                block  ;; label = @7
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 4
                    br_if 1 (;@7;)
                    i32.const 68304
                    i32.load
                    local.tee 4
                    i32.eqz
                    br_if 4 (;@4;)
                    i32.const 68300
                    i32.load
                    local.set 10
                    local.get 9
                    i32.const 68288
                    i32.load
                    local.tee 11
                    local.get 2
                    i32.mul
                    i32.add
                    local.set 6
                  end
                  global.get 1
                  i32.eqz
                  local.get 7
                  i32.const 1
                  i32.eq
                  i32.or
                  if  ;; label = @8
                    local.get 0
                    local.get 6
                    local.get 11
                    local.get 10
                    local.get 4
                    call_indirect (type 4)
                    i32.const 1
                    global.get 1
                    i32.const 1
                    i32.eq
                    br_if 7 (;@1;)
                    drop
                    local.set 4
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    local.get 4
                    i32.const 1
                    i32.and
                    i32.eqz
                    local.tee 4
                    br_if 1 (;@7;)
                    local.get 5
                    i32.const 0
                    i32.store8
                    local.get 6
                    i32.const 0
                    i32.const 68288
                    i32.load
                    memory.fill
                    local.get 3
                    i32.const 68288
                    i32.load
                    i32.const 3
                    i32.shl
                    i32.add
                    i32.const 68292
                    i32.load
                    local.tee 3
                    local.get 2
                    i32.mul
                    i32.add
                    i32.const 12
                    i32.add
                    i32.const 0
                    local.get 3
                    memory.fill
                    i32.const 68284
                    i32.const 68284
                    i32.load
                    i32.const 1
                    i32.sub
                    i32.store
                    br 6 (;@2;)
                  end
                end
                global.get 1
                i32.eqz
                if  ;; label = @7
                  local.get 2
                  i32.const 1
                  i32.add
                  local.set 2
                  br 2 (;@5;)
                end
              end
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 3
              i32.load offset=8
              local.set 3
              br 2 (;@3;)
            end
          end
        end
        global.get 1
        i32.eqz
        local.get 7
        i32.const 2
        i32.eq
        i32.or
        if  ;; label = @3
          call $runtime.nilPanic
          i32.const 2
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          unreachable
        end
      end
      return
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 1
    local.get 0
    i32.store
    local.get 1
    local.get 3
    i32.store offset=4
    local.get 1
    local.get 2
    i32.store offset=8
    local.get 1
    local.get 4
    i32.store offset=12
    local.get 1
    local.get 5
    i32.store offset=16
    local.get 1
    local.get 6
    i32.store offset=20
    local.get 1
    local.get 8
    i32.store offset=24
    local.get 1
    local.get 9
    i32.store offset=28
    local.get 1
    local.get 10
    i32.store offset=32
    local.get 1
    local.get 11
    i32.store offset=36
    global.get 2
    global.get 2
    i32.load
    i32.const 40
    i32.add
    i32.store)
  (func $calloc (type 3) (param i32 i32) (result i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      local.get 0
      local.get 0
      local.get 1
      i32.mul
      global.get 1
      select
      local.set 0
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        call $malloc
        drop
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        i32.const 0
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $realloc (type 3) (param i32 i32) (result i32)
    (local i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 16
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 2
      i32.load
      local.set 0
      local.get 2
      i32.load offset=4
      local.set 1
      local.get 2
      i32.load offset=8
      local.set 3
      local.get 2
      i32.load offset=12
      local.set 2
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 4
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 3
        global.set $__stack_pointer
      end
      block  ;; label = @2
        block  ;; label = @3
          block  ;; label = @4
            global.get 1
            i32.const 1
            local.get 1
            select
            if  ;; label = @5
              global.get 1
              i32.eqz
              local.get 4
              i32.eqz
              i32.or
              if  ;; label = @6
                local.get 0
                call $free
                i32.const 0
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              br_if 1 (;@4;)
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 1
              i32.const 0
              i32.lt_s
              br_if 2 (;@3;)
              local.get 0
              i32.eqz
              local.set 2
            end
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                br_if 1 (;@5;)
                local.get 3
                local.get 0
                i32.store offset=12
                local.get 3
                i32.const 12
                i32.add
                local.set 2
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 1
              i32.eq
              i32.or
              if  ;; label = @6
                i32.const 68276
                local.get 2
                local.get 3
                i32.const 12
                call $runtime.hashmapBinaryGet
                i32.const 1
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
                local.set 2
              end
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                i32.const 1
                i32.and
                i32.eqz
                br_if 4 (;@2;)
                local.get 3
                local.get 3
                i32.load
                local.get 3
                i32.load offset=4
                local.tee 2
                local.get 1
                local.get 1
                local.get 2
                i32.gt_u
                select
                memory.copy
                local.get 3
                local.get 0
                i32.store
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 2
              i32.eq
              i32.or
              if  ;; label = @6
                local.get 3
                call $runtime.hashmapBinaryDelete
                i32.const 2
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 3
              local.get 1
              i32.store offset=8
              local.get 3
              local.get 1
              i32.store offset=4
              local.get 3
              i32.const 12
              i32.add
              local.set 0
            end
            global.get 1
            i32.eqz
            local.get 4
            i32.const 3
            i32.eq
            i32.or
            if  ;; label = @5
              i32.const 68276
              local.get 0
              local.get 3
              call $runtime.hashmapBinarySet
              i32.const 3
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 3
            i32.const 16
            i32.add
            global.set $__stack_pointer
            i32.const 0
            return
          end
        end
        global.get 1
        i32.eqz
        local.get 4
        i32.const 4
        i32.eq
        i32.or
        if  ;; label = @3
          call $runtime.slicePanic
          i32.const 4
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
        global.get 1
        i32.eqz
        if  ;; label = @3
          unreachable
        end
      end
      global.get 1
      i32.eqz
      local.get 4
      i32.const 5
      i32.eq
      i32.or
      if  ;; label = @2
        i32.const 67760
        i32.const 66376
        call $runtime._panic
        i32.const 5
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      unreachable
    end
    local.set 5
    global.get 2
    i32.load
    local.get 5
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 5
    local.get 0
    i32.store
    local.get 5
    local.get 1
    i32.store offset=4
    local.get 5
    local.get 3
    i32.store offset=8
    local.get 5
    local.get 2
    i32.store offset=12
    global.get 2
    global.get 2
    i32.load
    i32.const 16
    i32.add
    i32.store
    i32.const 0)
  (func $_start (type 1)
    (local i32 i32 i32 i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 2
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 3
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 16
        i32.sub
        local.tee 2
        global.set $__stack_pointer
        i32.const 69032
        memory.size
        i32.const 16
        i32.shl
        local.tee 0
        local.get 0
        i32.const 69344
        i32.sub
        i32.const 65
        i32.div_u
        local.tee 0
        i32.sub
        local.tee 1
        i32.store
        local.get 1
        i32.const 0
        local.get 0
        memory.fill
      end
      global.get 1
      i32.eqz
      local.get 3
      i32.eqz
      i32.or
      if  ;; label = @2
        call $arc4random
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      local.get 3
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        call $arc4random
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 2
        i32.const 9
        i32.store offset=4
        local.get 2
        i32.const 66548
        i32.store
        local.get 2
        i32.const 0
        i32.store offset=12
        local.get 2
        i32.const 12
        i32.add
        local.set 0
      end
      global.get 1
      i32.eqz
      local.get 3
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        i32.const 0
        local.get 0
        local.get 2
        call $runtime.hashmapBinarySet
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 1
    local.get 0
    i32.store
    local.get 1
    local.get 2
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $runtime.panicOrGoexit (type 2) (param i32 i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 2
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.eqz
      i32.or
      if  ;; label = @2
        i32.const 66384
        i32.const 7
        call $runtime.printstring
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 1
      i32.eq
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $runtime.printitf
        i32.const 1
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      local.get 2
      i32.const 2
      i32.eq
      i32.or
      if  ;; label = @2
        call $runtime.printnl
        i32.const 2
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store)
  (func $runtime.printitf (type 2) (param i32 i32)
    (local i32 i32 i32 i64)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 24
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=8
      local.set 2
      local.get 1
      i32.load offset=12
      local.set 3
      local.get 1
      i64.load offset=16 align=4
      local.set 5
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 4
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        global.get $__stack_pointer
        i32.const 112
        i32.sub
        local.tee 3
        global.set $__stack_pointer
        local.get 0
        i32.const 67648
        i32.ne
        local.set 2
      end
      block  ;; label = @2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 2
            br_if 1 (;@3;)
            local.get 1
            i32.const 1
            i32.and
            i32.eqz
            local.set 0
          end
          global.get 1
          i32.const 1
          local.get 0
          select
          if  ;; label = @4
            global.get 1
            i32.eqz
            local.get 4
            i32.eqz
            i32.or
            if  ;; label = @5
              i32.const 66539
              i32.const 4
              call $runtime.printstring
              i32.const 0
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            br_if 2 (;@2;)
          end
          global.get 1
          i32.eqz
          local.get 4
          i32.const 1
          i32.eq
          i32.or
          if  ;; label = @4
            i32.const 66543
            i32.const 5
            call $runtime.printstring
            i32.const 1
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          br_if 1 (;@2;)
        end
        local.get 2
        local.get 0
        i32.const 67664
        i32.eq
        global.get 1
        select
        local.set 2
        block  ;; label = @3
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 2
            br_if 1 (;@3;)
            local.get 0
            i32.const 66568
            i32.ne
            local.set 2
          end
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 2
              br_if 1 (;@4;)
              local.get 1
              i32.extend8_s
              local.set 0
            end
            global.get 1
            i32.eqz
            local.get 4
            i32.const 2
            i32.eq
            i32.or
            if  ;; label = @5
              local.get 0
              call $runtime.printint32
              i32.const 2
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            br_if 2 (;@2;)
          end
          local.get 2
          local.get 0
          i32.const 66584
          i32.ne
          global.get 1
          select
          local.set 2
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 2
              br_if 1 (;@4;)
              local.get 1
              i32.extend16_s
              local.set 0
            end
            global.get 1
            i32.eqz
            local.get 4
            i32.const 3
            i32.eq
            i32.or
            if  ;; label = @5
              local.get 0
              call $runtime.printint32
              i32.const 3
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            br_if 2 (;@2;)
          end
          global.get 1
          i32.eqz
          if  ;; label = @4
            local.get 0
            i32.const 67728
            i32.eq
            br_if 1 (;@3;)
            local.get 0
            i32.const 67080
            i32.ne
            local.set 2
          end
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 2
              br_if 1 (;@4;)
              local.get 1
              i64.load
              local.tee 5
              i64.const 0
              i64.ge_s
              local.set 0
            end
            global.get 1
            i32.const 1
            local.get 0
            select
            if  ;; label = @5
              global.get 1
              i32.eqz
              local.get 4
              i32.const 4
              i32.eq
              i32.or
              if  ;; label = @6
                i32.const 45
                call $runtime.putchar
                i32.const 4
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              local.get 5
              i64.const 0
              local.get 5
              i64.sub
              global.get 1
              select
              local.set 5
            end
            global.get 1
            i32.eqz
            local.get 4
            i32.const 5
            i32.eq
            i32.or
            if  ;; label = @5
              local.get 5
              call $runtime.printuint64
              i32.const 5
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            br_if 2 (;@2;)
          end
          local.get 2
          local.get 0
          i32.const 66600
          i32.eq
          global.get 1
          select
          local.set 2
          block  ;; label = @4
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 2
              br_if 1 (;@4;)
              local.get 0
              i32.const 67492
              i32.ne
              local.set 2
            end
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                br_if 1 (;@5;)
                local.get 1
                i32.const 255
                i32.and
                local.set 0
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 6
              i32.eq
              i32.or
              if  ;; label = @6
                local.get 0
                call $runtime.printuint32
                i32.const 6
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              br_if 3 (;@2;)
            end
            local.get 2
            local.get 0
            i32.const 66616
            i32.ne
            global.get 1
            select
            local.set 2
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                br_if 1 (;@5;)
                local.get 1
                i32.const 65535
                i32.and
                local.set 0
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 7
              i32.eq
              i32.or
              if  ;; label = @6
                local.get 0
                call $runtime.printuint32
                i32.const 7
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              br_if 3 (;@2;)
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 0
              i32.const 67064
              i32.eq
              br_if 1 (;@4;)
              local.get 0
              i32.const 67744
              i32.ne
              local.set 2
            end
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                br_if 1 (;@5;)
                local.get 1
                i64.load
                local.set 5
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 8
              i32.eq
              i32.or
              if  ;; label = @6
                local.get 5
                call $runtime.printuint64
                i32.const 8
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              br_if 3 (;@2;)
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              local.get 0
              i32.const 66964
              i32.eq
              br_if 1 (;@4;)
              local.get 0
              i32.const 67760
              i32.ne
              local.set 2
            end
            block  ;; label = @5
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 2
                br_if 1 (;@5;)
                local.get 1
                i32.load
                local.set 0
                local.get 1
                i32.load offset=4
                local.set 1
              end
              global.get 1
              i32.eqz
              local.get 4
              i32.const 9
              i32.eq
              i32.or
              if  ;; label = @6
                local.get 0
                local.get 1
                call $runtime.printstring
                i32.const 9
                global.get 1
                i32.const 1
                i32.eq
                br_if 5 (;@1;)
                drop
              end
              global.get 1
              i32.eqz
              br_if 3 (;@2;)
            end
            local.get 2
            local.get 0
            i32.const 68076
            i32.eq
            global.get 1
            select
            local.set 2
            block  ;; label = @5
              block  ;; label = @6
                block  ;; label = @7
                  block  ;; label = @8
                    block  ;; label = @9
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 2
                        local.get 0
                        i32.const 68100
                        i32.eq
                        i32.or
                        local.get 0
                        i32.const 68116
                        i32.eq
                        local.get 0
                        i32.const 68140
                        i32.eq
                        i32.or
                        i32.or
                        local.get 0
                        i32.const 68180
                        i32.eq
                        local.get 0
                        i32.const 68164
                        i32.eq
                        i32.or
                        i32.or
                        i32.eqz
                        if  ;; label = @11
                          local.get 0
                          i32.const 68016
                          i32.ne
                          local.tee 2
                          br_if 2 (;@9;)
                        end
                        local.get 0
                        i32.const 68180
                        i32.eq
                        if  ;; label = @11
                          local.get 1
                          br_if 3 (;@8;)
                          br 6 (;@5;)
                        end
                        local.get 0
                        i32.const 68164
                        i32.eq
                        local.get 0
                        i32.const 68140
                        i32.eq
                        i32.or
                        br_if 5 (;@5;)
                        block (result i32)  ;; label = @11
                          block  ;; label = @12
                            local.get 0
                            i32.const 68116
                            i32.eq
                            if  ;; label = @13
                              local.get 1
                              i32.eqz
                              br_if 8 (;@5;)
                              local.get 1
                              i32.load offset=4
                              local.set 2
                              local.get 1
                              i32.load
                              local.set 1
                              i32.const 0
                              local.tee 0
                              i32.const 66182
                              i32.load8_u
                              i32.store8
                              i32.const 0
                              i32.const 66174
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66166
                              i64.load align=1
                              i64.store align=1
                              local.get 2
                              i32.eqz
                              br_if 1 (;@12;)
                              i32.const 0
                              local.get 1
                              local.get 2
                              memory.copy
                              i32.const 66183
                              local.set 0
                              i32.const 14
                              br 2 (;@11;)
                            end
                            local.get 0
                            i32.const 68100
                            i32.eq
                            if  ;; label = @13
                              local.get 1
                              i32.eqz
                              br_if 8 (;@5;)
                              local.get 1
                              i32.load offset=4
                              local.tee 0
                              if  ;; label = @14
                                local.get 1
                                i32.load
                                local.set 1
                                local.get 0
                                i32.const 66142
                                i64.load align=1
                                i64.store align=1
                                local.get 0
                                i32.const 66136
                                i64.load align=1
                                i64.store align=1
                                local.get 0
                                i32.const 66128
                                i64.load align=1
                                i64.store align=1
                                local.get 0
                                i32.const 66120
                                i64.load align=1
                                i64.store align=1
                                local.get 0
                                local.get 1
                                local.get 0
                                memory.copy
                                i32.const 66150
                                local.set 0
                                i32.const 16
                                br 3 (;@11;)
                              end
                              i32.const 0
                              local.tee 0
                              i32.const 66142
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66136
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66128
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66120
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66158
                              i64.load align=1
                              i64.store align=1
                              i32.const 0
                              i32.const 66150
                              i64.load align=1
                              i64.store align=1
                              i32.const 46
                              br 2 (;@11;)
                            end
                            local.get 1
                            i32.eqz
                            local.get 0
                            i32.const 68076
                            i32.ne
                            i32.or
                            br_if 7 (;@5;)
                            local.get 1
                            i32.load
                            local.set 0
                            local.get 1
                            i32.load offset=4
                            br 1 (;@11;)
                          end
                          i32.const 0
                          i32.const 66189
                          i64.load align=1
                          i64.store align=1
                          i32.const 0
                          i32.const 66183
                          i64.load align=1
                          i64.store align=1
                          i32.const 31
                        end
                        local.set 2
                      end
                      global.get 1
                      i32.eqz
                      local.get 4
                      i32.const 10
                      i32.eq
                      i32.or
                      if  ;; label = @10
                        local.get 0
                        local.get 2
                        call $runtime.printstring
                        i32.const 10
                        global.get 1
                        i32.const 1
                        i32.eq
                        br_if 9 (;@1;)
                        drop
                      end
                      global.get 1
                      i32.eqz
                      br_if 7 (;@2;)
                    end
                    local.get 2
                    local.get 0
                    i32.const 68240
                    i32.ne
                    global.get 1
                    select
                    local.set 2
                    block  ;; label = @9
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 8
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 11
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 11
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=12
                          local.set 0
                          local.get 3
                          i32.load offset=8
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      local.get 2
                      local.get 0
                      i32.const 68204
                      i32.ne
                      global.get 1
                      select
                      local.set 2
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 16
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 12
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 12
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=20
                          local.set 0
                          local.get 3
                          i32.load offset=16
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      local.get 2
                      local.get 0
                      i32.const 68196
                      i32.ne
                      global.get 1
                      select
                      local.set 2
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 3
                          i32.const 24
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 13
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 1
                          call $_*internal/reflectlite.RawType_.String
                          i32.const 13
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=28
                          local.set 0
                          local.get 3
                          i32.load offset=24
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 0
                        i32.const 68188
                        i32.eq
                        br_if 5 (;@5;)
                        local.get 0
                        i32.const 68172
                        i32.ne
                        local.set 2
                      end
                      global.get 1
                      i32.const 1
                      local.get 2
                      select
                      if  ;; label = @10
                        block  ;; label = @11
                          global.get 1
                          i32.eqz
                          if  ;; label = @12
                            local.get 1
                            i32.eqz
                            if  ;; label = @13
                              i32.const 66632
                              local.set 1
                              br 2 (;@11;)
                            end
                            local.get 1
                            i32.const 69328
                            i32.ne
                            local.tee 0
                            br_if 1 (;@11;)
                            i32.const 69396
                            i32.load8_u
                            if  ;; label = @13
                              i32.const 69400
                              i32.const 0
                              i32.store
                              br 8 (;@5;)
                            end
                            i32.const 69396
                            i32.const 1
                            i32.store8
                            local.get 3
                            i32.const 69396
                            i32.store offset=104
                            local.get 3
                            i64.const 0
                            i64.store offset=96
                            i32.const 69392
                            i32.load8_u
                            i32.eqz
                            local.set 0
                          end
                          block  ;; label = @12
                            block  ;; label = @13
                              global.get 1
                              i32.eqz
                              if  ;; label = @14
                                local.get 0
                                br_if 1 (;@13;)
                                local.get 3
                                i32.const 96
                                i32.add
                                local.set 0
                              end
                              loop  ;; label = @14
                                global.get 1
                                i32.eqz
                                if  ;; label = @15
                                  local.get 0
                                  i32.eqz
                                  local.tee 1
                                  br_if 3 (;@12;)
                                  local.get 0
                                  i32.load offset=4
                                  local.set 1
                                  local.get 0
                                  i32.load offset=8
                                  local.set 0
                                end
                                global.get 1
                                i32.eqz
                                local.get 4
                                i32.const 14
                                i32.eq
                                i32.or
                                if  ;; label = @15
                                  local.get 0
                                  call $_*internal/task.Mutex_.Unlock
                                  i32.const 14
                                  global.get 1
                                  i32.const 1
                                  i32.eq
                                  br_if 14 (;@1;)
                                  drop
                                end
                                global.get 1
                                i32.eqz
                                if  ;; label = @15
                                  local.get 1
                                  local.set 0
                                  br 1 (;@14;)
                                end
                              end
                            end
                            global.get 1
                            i32.eqz
                            if  ;; label = @13
                              i32.const 69332
                              i32.const 5
                              i32.store
                              i32.const 69328
                              i32.const 66940
                              i32.store
                              i32.const 69392
                              i32.const 1
                              i32.store8
                              local.get 3
                              i32.const 96
                              i32.add
                              local.set 0
                            end
                            loop  ;; label = @13
                              global.get 1
                              i32.eqz
                              if  ;; label = @14
                                local.get 0
                                i32.eqz
                                local.tee 1
                                br_if 2 (;@12;)
                                local.get 0
                                i32.load offset=4
                                local.set 1
                                local.get 0
                                i32.load offset=8
                                local.set 0
                              end
                              global.get 1
                              i32.eqz
                              local.get 4
                              i32.const 15
                              i32.eq
                              i32.or
                              if  ;; label = @14
                                local.get 0
                                call $_*internal/task.Mutex_.Unlock
                                i32.const 15
                                global.get 1
                                i32.const 1
                                i32.eq
                                br_if 13 (;@1;)
                                drop
                              end
                              global.get 1
                              i32.eqz
                              if  ;; label = @14
                                local.get 1
                                local.set 0
                                br 1 (;@13;)
                              end
                            end
                          end
                          local.get 1
                          i32.const 69328
                          global.get 1
                          select
                          local.set 1
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 1
                          i32.load offset=4
                          local.set 0
                          local.get 1
                          i32.load
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      local.get 2
                      local.get 0
                      i32.const 68156
                      i32.ne
                      global.get 1
                      select
                      local.set 2
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 3
                          i32.const 32
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 16
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 1
                          call $_*internal/reflectlite.RawType_.String
                          i32.const 16
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=36
                          local.set 0
                          local.get 3
                          i32.load offset=32
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      local.get 2
                      local.get 0
                      i32.const 68148
                      i32.ne
                      global.get 1
                      select
                      local.set 2
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 40
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 17
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 17
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=44
                          local.set 0
                          local.get 3
                          i32.load offset=40
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 0
                        i32.const 68132
                        i32.eq
                        br_if 3 (;@7;)
                        local.get 0
                        i32.const 68108
                        i32.ne
                        local.set 2
                      end
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 48
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 18
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 18
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=52
                          local.set 0
                          local.get 3
                          i32.load offset=48
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      local.get 2
                      local.get 0
                      i32.const 68092
                      i32.ne
                      global.get 1
                      select
                      local.set 2
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 3
                          i32.const 56
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 19
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 1
                          call $_*internal/reflectlite.RawType_.String
                          i32.const 19
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=60
                          local.set 0
                          local.get 3
                          i32.load offset=56
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 0
                        i32.const 68084
                        i32.eq
                        if  ;; label = @11
                          local.get 1
                          i32.eqz
                          br_if 6 (;@5;)
                          local.get 3
                          i32.const -64
                          i32.sub
                          local.get 1
                          i32.load8_u
                          call $_internal/reflectlite.Kind_.String
                          local.get 3
                          i32.load offset=68
                          local.set 0
                          local.get 3
                          i32.load offset=64
                          local.set 1
                          br 2 (;@9;)
                        end
                        local.get 0
                        i32.const 67952
                        i32.ne
                        local.set 2
                      end
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 72
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 20
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 20
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=76
                          local.set 0
                          local.get 3
                          i32.load offset=72
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 0
                        i32.const 67924
                        i32.eq
                        br_if 4 (;@6;)
                        local.get 0
                        i32.const 67848
                        i32.ne
                        local.set 2
                      end
                      block  ;; label = @10
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 2
                          br_if 1 (;@10;)
                          local.get 1
                          i32.load
                          local.set 2
                          local.get 1
                          i32.load offset=4
                          local.set 1
                          local.get 3
                          i32.const 80
                          i32.add
                          local.set 0
                        end
                        global.get 1
                        i32.eqz
                        local.get 4
                        i32.const 21
                        i32.eq
                        i32.or
                        if  ;; label = @11
                          local.get 0
                          local.get 2
                          local.get 1
                          call $_internal/reflectlite.Value_.String
                          i32.const 21
                          global.get 1
                          i32.const 1
                          i32.eq
                          br_if 10 (;@1;)
                          drop
                        end
                        global.get 1
                        i32.eqz
                        if  ;; label = @11
                          local.get 3
                          i32.load offset=84
                          local.set 0
                          local.get 3
                          i32.load offset=80
                          local.set 1
                          br 2 (;@9;)
                        end
                      end
                      global.get 1
                      i32.eqz
                      if  ;; label = @10
                        local.get 0
                        i32.const 67776
                        i32.ne
                        br_if 5 (;@5;)
                        local.get 3
                        i32.const 88
                        i32.add
                        local.get 1
                        call $_internal/reflectlite.Kind_.String
                        local.get 3
                        i32.load offset=88
                        local.set 1
                        local.get 3
                        i32.load offset=92
                        local.set 0
                      end
                    end
                    global.get 1
                    i32.eqz
                    local.get 4
                    i32.const 22
                    i32.eq
                    i32.or
                    if  ;; label = @9
                      local.get 1
                      local.get 0
                      call $runtime.printstring
                      i32.const 22
                      global.get 1
                      i32.const 1
                      i32.eq
                      br_if 8 (;@1;)
                      drop
                    end
                    global.get 1
                    i32.eqz
                    br_if 6 (;@2;)
                  end
                  global.get 1
                  i32.eqz
                  local.get 4
                  i32.const 23
                  i32.eq
                  i32.or
                  if  ;; label = @8
                    call $runtime.slicePanic
                    i32.const 23
                    global.get 1
                    i32.const 1
                    i32.eq
                    br_if 7 (;@1;)
                    drop
                  end
                  global.get 1
                  i32.eqz
                  if  ;; label = @8
                    unreachable
                  end
                end
                global.get 1
                i32.eqz
                local.get 4
                i32.const 24
                i32.eq
                i32.or
                if  ;; label = @7
                  local.get 1
                  call $_*io/fs.FileMode_.String
                  i32.const 24
                  global.get 1
                  i32.const 1
                  i32.eq
                  br_if 6 (;@1;)
                  drop
                end
                global.get 1
                i32.eqz
                if  ;; label = @7
                  unreachable
                end
              end
              global.get 1
              i32.eqz
              if  ;; label = @6
                local.get 1
                call $_io/fs.FileMode_.String$invoke
                unreachable
              end
            end
            global.get 1
            i32.eqz
            local.get 4
            i32.const 25
            i32.eq
            i32.or
            if  ;; label = @5
              call $runtime.nilPanic
              i32.const 25
              global.get 1
              i32.const 1
              i32.eq
              br_if 4 (;@1;)
              drop
            end
            global.get 1
            i32.eqz
            if  ;; label = @5
              unreachable
            end
          end
          global.get 1
          i32.eqz
          local.get 4
          i32.const 26
          i32.eq
          i32.or
          if  ;; label = @4
            local.get 1
            call $runtime.printuint32
            i32.const 26
            global.get 1
            i32.const 1
            i32.eq
            br_if 3 (;@1;)
            drop
          end
          global.get 1
          i32.eqz
          br_if 1 (;@2;)
        end
        global.get 1
        i32.eqz
        local.get 4
        i32.const 27
        i32.eq
        i32.or
        if  ;; label = @3
          local.get 1
          call $runtime.printint32
          i32.const 27
          global.get 1
          i32.const 1
          i32.eq
          br_if 2 (;@1;)
          drop
        end
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        local.get 3
        i32.const 112
        i32.add
        global.set $__stack_pointer
      end
      return
    end
    local.set 4
    global.get 2
    i32.load
    local.get 4
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 4
    local.get 0
    i32.store
    local.get 4
    local.get 1
    i32.store offset=4
    local.get 4
    local.get 2
    i32.store offset=8
    local.get 4
    local.get 3
    i32.store offset=12
    local.get 4
    local.get 5
    i64.store offset=16 align=4
    global.get 2
    global.get 2
    i32.load
    i32.const 24
    i32.add
    i32.store)
  (func $_*io/fs.FileMode_.String (type 0) (param i32)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.const 2
      i32.eq
      if  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
        local.set 1
      end
      global.get 1
      i32.const 1
      local.get 0
      select
      i32.eqz
      if  ;; label = @2
        local.get 0
        i32.load
        call $_io/fs.FileMode_.String
        unreachable
      end
      global.get 1
      i32.eqz
      local.get 1
      i32.eqz
      i32.or
      if  ;; label = @2
        call $runtime.nilPanic
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        unreachable
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $_io/fs.FileMode_.String$invoke (type 0) (param i32)
    local.get 0
    call $_io/fs.FileMode_.String
    unreachable)
  (func $_io/fs.FileMode_.String (type 0) (param i32)
    (local i32 i32 i32 i32)
    loop  ;; label = @1
      local.get 1
      i32.const 12
      i32.gt_s
      br_if 0 (;@1;)
      block  ;; label = @2
        local.get 1
        i32.const 66945
        i32.add
        i32.load8_s
        local.tee 3
        i32.const 0
        i32.ge_s
        if  ;; label = @3
          i32.const 1
          local.set 4
          br 1 (;@2;)
        end
        i32.const 13
        local.get 1
        i32.sub
        local.set 2
        local.get 3
        i32.const -32
        i32.and
        i32.const -64
        i32.eq
        if  ;; label = @3
          i32.const 1
          local.set 4
          local.get 2
          i32.const 2
          i32.lt_u
          br_if 1 (;@2;)
          local.get 1
          i32.const 66946
          i32.add
          i32.load8_u
          i32.const 192
          i32.and
          i32.const 128
          i32.ne
          local.get 3
          i32.const 31
          i32.and
          i32.const 2
          i32.lt_u
          i32.or
          br_if 1 (;@2;)
          i32.const 2
          local.set 4
          br 1 (;@2;)
        end
        local.get 3
        i32.const -16
        i32.and
        i32.const -32
        i32.eq
        if  ;; label = @3
          i32.const 1
          local.set 4
          local.get 2
          i32.const 3
          i32.lt_u
          br_if 1 (;@2;)
          local.get 1
          i32.const 66946
          i32.add
          i32.load8_u
          local.tee 2
          i32.const 192
          i32.and
          i32.const 128
          i32.ne
          br_if 1 (;@2;)
          local.get 1
          i32.const 66947
          i32.add
          i32.load8_u
          i32.const 192
          i32.and
          i32.const 128
          i32.ne
          br_if 1 (;@2;)
          local.get 2
          i32.const 63
          i32.and
          i32.const 6
          i32.shl
          local.get 3
          i32.const 15
          i32.and
          local.tee 3
          i32.const 12
          i32.shl
          i32.or
          local.tee 2
          i32.const 2048
          i32.lt_u
          local.get 3
          i32.const 13
          i32.le_u
          local.get 2
          i32.const 55295
          i32.gt_u
          i32.and
          i32.or
          br_if 1 (;@2;)
          i32.const 3
          local.set 4
          br 1 (;@2;)
        end
        i32.const 1
        local.set 4
        local.get 3
        i32.const 248
        i32.and
        i32.const 240
        i32.ne
        local.get 2
        i32.const 4
        i32.lt_u
        i32.or
        br_if 0 (;@2;)
        local.get 1
        i32.const 66946
        i32.add
        i32.load8_u
        local.tee 2
        i32.const 192
        i32.and
        i32.const 128
        i32.ne
        br_if 0 (;@2;)
        local.get 1
        i32.const 66947
        i32.add
        i32.load8_u
        i32.const 192
        i32.and
        i32.const 128
        i32.ne
        br_if 0 (;@2;)
        local.get 1
        i32.const 66948
        i32.add
        i32.load8_u
        i32.const 192
        i32.and
        i32.const 128
        i32.ne
        local.get 2
        i32.const 63
        i32.and
        i32.const 12
        i32.shl
        local.get 3
        i32.const 7
        i32.and
        i32.const 18
        i32.shl
        i32.or
        i32.const 65536
        i32.sub
        i32.const 1048575
        i32.gt_u
        i32.or
        br_if 0 (;@2;)
        i32.const 4
        local.set 4
      end
      local.get 1
      local.get 4
      i32.add
      local.set 1
      br 0 (;@1;)
    end
    unreachable)
  (func $malloc.command_export (type 5) (param i32) (result i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 4
      i32.sub
      i32.store
      global.get 2
      i32.load
      i32.load
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        call $malloc
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        call $__wasm_call_dtors
        local.get 0
        return
      end
      unreachable
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    i32.const 0)
  (func $free.command_export (type 0) (param i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 4
      i32.sub
      i32.store
      global.get 2
      i32.load
      i32.load
      local.set 0
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        call $free
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        call $__wasm_call_dtors
      end
      return
    end
    local.set 1
    global.get 2
    i32.load
    local.get 1
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func $calloc.command_export (type 3) (param i32 i32) (result i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $calloc
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        call $__wasm_call_dtors
        local.get 0
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $realloc.command_export (type 3) (param i32 i32) (result i32)
    (local i32)
    global.get 1
    i32.const 2
    i32.eq
    if  ;; label = @1
      global.get 2
      global.get 2
      i32.load
      i32.const 8
      i32.sub
      i32.store
      global.get 2
      i32.load
      local.tee 1
      i32.load
      local.set 0
      local.get 1
      i32.load offset=4
      local.set 1
    end
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        local.get 0
        local.get 1
        call $realloc
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
        local.set 0
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        call $__wasm_call_dtors
        local.get 0
        return
      end
      unreachable
    end
    local.set 2
    global.get 2
    i32.load
    local.get 2
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store
    global.get 2
    i32.load
    local.tee 2
    local.get 0
    i32.store
    local.get 2
    local.get 1
    i32.store offset=4
    global.get 2
    global.get 2
    i32.load
    i32.const 8
    i32.add
    i32.store
    i32.const 0)
  (func $_start.command_export (type 1)
    (local i32)
    block (result i32)  ;; label = @1
      global.get 1
      i32.eqz
      global.get 1
      i32.const 2
      i32.eq
      if (result i32)  ;; label = @2
        global.get 2
        global.get 2
        i32.load
        i32.const 4
        i32.sub
        i32.store
        global.get 2
        i32.load
        i32.load
      else
        i32.const 0
      end
      i32.eqz
      i32.or
      if  ;; label = @2
        call $_start
        i32.const 0
        global.get 1
        i32.const 1
        i32.eq
        br_if 1 (;@1;)
        drop
      end
      global.get 1
      i32.eqz
      if  ;; label = @2
        call $__wasm_call_dtors
      end
      return
    end
    local.set 0
    global.get 2
    i32.load
    local.get 0
    i32.store
    global.get 2
    global.get 2
    i32.load
    i32.const 4
    i32.add
    i32.store)
  (func (;55;) (type 0) (param i32)
    i32.const 1
    global.set 1
    local.get 0
    global.set 2
    global.get 2
    i32.load
    global.get 2
    i32.load offset=4
    i32.gt_u
    if  ;; label = @1
      unreachable
    end)
  (func (;56;) (type 1)
    i32.const 0
    global.set 1
    global.get 2
    i32.load
    global.get 2
    i32.load offset=4
    i32.gt_u
    if  ;; label = @1
      unreachable
    end)
  (func (;57;) (type 0) (param i32)
    i32.const 2
    global.set 1
    local.get 0
    global.set 2
    global.get 2
    i32.load
    global.get 2
    i32.load offset=4
    i32.gt_u
    if  ;; label = @1
      unreachable
    end)
  (func (;58;) (type 1)
    i32.const 0
    global.set 1
    global.get 2
    i32.load
    global.get 2
    i32.load offset=4
    i32.gt_u
    if  ;; label = @1
      unreachable
    end)
  (func (;59;) (type 7) (result i32)
    global.get 1)
  (table (;0;) 3 3 funcref)
  (memory (;0;) 2)
  (global $__stack_pointer (mut i32) (i32.const 65536))
  (global (;1;) (mut i32) (i32.const 0))
  (global (;2;) (mut i32) (i32.const 0))
  (export "memory" (memory 0))
  (export "malloc" (func $malloc.command_export))
  (export "free" (func $free.command_export))
  (export "calloc" (func $calloc.command_export))
  (export "realloc" (func $realloc.command_export))
  (export "_start" (func $_start.command_export))
  (export "asyncify_start_unwind" (func 55))
  (export "asyncify_stop_unwind" (func 56))
  (export "asyncify_start_rewind" (func 57))
  (export "asyncify_stop_rewind" (func 58))
  (export "asyncify_get_state" (func 59))
  (elem (;0;) (i32.const 1) func $runtime.memequal $runtime.hash32)
  (data $.rodata (i32.const 65536) "expand 32-byte kElemKeyFieldChanDir\00\00meta\00\00\00z\00\00\00\14\0a\01\00T\00\01\00\cb\00\01\00reflectlite.ValueError\00\00Z\00\00\00x\00\01\00\cb\00\01\00\0c\00\00\00\02\00\00\00\b0\08\01\00\e4\01\01\00\c0\08\01\00\ef\00\01\00\d5\00\00\00T\00\01\00reflect\00errors\00io/fs\00\04\10Err\00\04\10LayoutElem\00\04\18ValueElem\00syscall\00\04\08Path\00\04\08Value\00internal/reflectlite\00time\00\04 Message\00\04\08Kind\00invalidboolintint8int16int32int64uintuint8uint16uint32uint64uintptrfloat32float64complex64complex128stringunsafe.Pointerchaninterfaceptrslicearrayfuncmapstruct\00\00\00z\00\00\00\04\0a\01\00\c0\01\01\00\cb\00\01\00reflectlite.TypeError\00\00\00Z\00\00\00\dc\01\01\00\cb\00\01\00\08\00\00\00\01\00\00\00\b0\08\01\00\e4\01\01\00\d5\00\00\00\c0\01\01\00\04\00Method\00chan<- <-chan chan ()chan *[]struct {}interface {}reflect: field index out of range\1f\02\01\00!\00\00\00reflect: call of reflect.Type. on invalid typereflect: call of  on zero Value\00\00\00z\00\00\00\ec\09\01\00\bc\02\01\00\88\00\01\00errors.errorString\00\00Z\00\00\00\d8\02\01\00\88\00\01\00\08\00\00\00\01\00\00\00\b0\08\01\00\e0\02\01\00\d5\00\00\00\bc\02\01\00\00\00s\00sync: unlock of unlocked Mutex\00\00\00\00\00\00\e4\02\01\00\1e\00\00\00free: invalid pointer\00\00\00\10\03\01\00\15\00\00\00realloc: invalid pointer0\03\01\00\18\00\00\00panic: panic: runtime error: nil pointer dereferenceassignment to entry in nil mapindex out of rangeslice out of rangeunsafe.Slice/String: len out of rangetruefalseScheduler\0d\00RawType\00\00\c3\00\00\00\10\04\01\00\d5\00\00\00\08\04\01\00\c4\00\00\00 \04\01\00\d5\00\00\00\18\04\01\00\c7\00\00\000\04\01\00\d5\00\00\00(\04\01\00\c9\00\00\00@\04\01\00\d5\00\00\008\04\01\00\88\04\01\00\03")
  (data $.rodata.1 (i32.const 66696) "UTC\00z\00\00\00T\0a\01\00\ac\04\01\00\e0\00\01\00time.ParseError\00Z\00\00\00\e8\04\01\00\e0\00\01\00(\00\00\00\05\00\00\00\b0\08\01\00\f0\04\01\00\b0\08\01\00\c3\00\01\00\b0\08\01\00\9b\00\01\00\b0\08\01\00\a8\00\01\00\b0\08\01\00\e5\00\01\00\d5\00\00\00\ac\04\01\00\04\00Layout\00\00\00wall\00\00\08ext\00\00\10loc\00\00\08zone\00\00\00name\00\00\08offset\00\00\0cisDST\00\00\14tx\00\00\00when\00\00\08index\00\00\09isstd\00\00\0aisutc\00\00 extend\00\00(cacheStart\00\000cacheEnd\00\008cacheZone\00LocaldalTLDpSugct?\04\00Op\00\00\cc\00\00\00\9c\05\01\00\d5\00\00\00\94\05\01\00z\00\00\00,\0a\01\00\c4\05\01\00\8f\00\01\00fs.PathError\00\00\00\00Z\00\00\00\f0\05\01\00\8f\00\01\00\18\00\00\00\03\00\00\00\b0\08\01\00\8e\05\01\00\b0\08\01\00\bc\00\01\00`\08\01\00\95\00\01\00\d5\00\00\00\c4\05\01\00\ca\00\00\00\00\06\01\00\d5\00\00\00\f8\05\01\00\c6\00\00\00\10\06\01\00\d5\00\00\00\08\06\01\00\da\00\00\00D\06\01\00\e0\00\01\00\18\00\00\00\03\00\00\00\a0\08\01\00\f9\04\01\00\08\06\01\00\00\05\01\00L\0a\01\00\06\05\01\00\d5\00\00\00\18\06\01\00:\00\00\00L\0a\01\00l\06\01\00\e0\00\01\00time.Location\00\00\00\1a\00\00\00\b8\06\01\00\e0\00\01\00@\00\00\00\07\00\00\00\b0\08\01\00\13\05\01\00\c0\06\01\00\0c\05\01\00,\07\01\00+\05\01\00\b0\08\01\00O\05\01\00\08\06\01\00X\05\01\00\08\06\01\00e\05\01\00\f0\06\01\00p\05\01\00\d5\00\00\00l\06\01\00\16\00\00\00\cc\06\01\00\d4\06\01\00\d5\00\00\00\c0\06\01\00z\00\00\00\f0\06\01\00\f8\06\01\00\e0\00\01\00time.zone\00\00\00\d5\00\00\00\d4\06\01\00Z\00\00\00$\07\01\00\e0\00\01\00\10\00\00\00\03\00\00\00\b0\08\01\00\13\05\01\00P\08\01\00\1a\05\01\00@\08\01\00#\05\01\00\d5\00\00\00\f8\06\01\00\16\00\00\008\07\01\00@\07\01\00\d5\00\00\00,\07\01\00\fa\00\00\00`\07\01\00h\07\01\00\e0\00\01\00time.zoneTrans\00\00\d5\00\00\00@\07\01\00\da\00\00\00\9c\07\01\00\e0\00\01\00\10\00\00\00\04\00\00\00\08\06\01\000\05\01\00\a4\07\01\007\05\01\00@\08\01\00?\05\01\00@\08\01\00G\05\01\00\d5\00\00\00h\07\01\00\c8\00\00\00\ac\07\01\00\d5\00\00\00\a4\07\01\00\0d\00Value\00Z\00\00\00\e8\07\01\00\cb\00\01\00\0c\00\00\00\03\00\00\00\fc\09\01\00\f0\07\01\00(\08\01\00 \08\01\00,\09\01\008\08\01\00\d5\00\00\00\bc\07\01\00\00\00typecode\00\00\da\00\00\00\18\08\01\00\cb\00\01\00\01\00\00\00\01\00\00\00\a4\07\01\00#\00\01\00\d5\00\00\00\fc\07\01\00\00\04value\00R\00\00\000\08\01\00\d5\00\00\00(\08\01\00\00\08flags\00\c1\00\00\00H\08\01\00\d5\00\00\00@\08\01\00\c2\00\00\00X\08\01\00\d5\00\00\00P\08\01\00t\00\01\00x\08\01\00\80\08\01\00\f5\00\01\00.error\00\00\d5\00\00\00`\08\01\00T\00\00\00\88\08\01\00\d5\00\00\00\80\08\01\00\c5\00\00\00\98\08\01\00\d5\00\00\00\90\08\01\00\cb\00\00\00\a8\08\01\00\d5\00\00\00\a0\08\01\00Q\00\00\00\b8\08\01\00\d5\00\00\00\b0\08\01\00\e8\00\01\00\f4\09\01\00\a4\07\01\00\cb\00\01\00reflectlite.Kind\00\00\00\00\fa\00\04\00\fc\09\01\00\fc\07\01\00\cb\00\01\00reflectlite.RawType\00z\00F\00\0c\0a\01\00\bc\07\01\00\cb\00\01\00reflectlite.Value\00\00\00\e8\00\00\00\1c\0a\01\00\a4\07\01\00\cb\00\01\00reflectlite.valueFlags\00\00\ea\00\05\00$\0a\01\00\f8\05\01\00\8f\00\01\00fs.FileMode\00z\00J\004\0a\01\00\90\0a\01\00\80\00\01\00reflect.Value\00\00\00\fa\00\04\00<\0a\01\00t\0a\01\00\80\00\01\00reflect.rawType\00\ec\00\04\00D\0a\01\00\94\05\01\00\b4\00\01\00syscall.Errno\00\00\00\fa\00+\00\5c\0a\01\00\18\06\01\00\e0\00\01\00time.Time\00\00\00\d5\00\01\00\98\02\01\00\d5\00\01\00\c0\08\01\00\d5\00\19\00\e4\08\01\00\d5\00\01\00\98\01\01\00\d5\00F\00\08\09\01\00\d5\00\01\00,\00\01\00\d5\00\00\00,\09\01\00\d5\00\05\00T\09\01\00\d5\00\03\00\a4\05\01\00\d5\00J\00p\09\01\00\d5\00#\00\90\09\01\00\d5\00\04\00\b0\09\01\00\d5\00\01\00L\06\01\00\d5\00\01\00\8c\04\01\00\d5\00/\00\d0\09\01\00\d5\00\19\00t\0a\01\00\d5\00F\00\90\0a\01\00\da\00\04\00d\0a\01\00\80\00\01\00\01\00\00\00\01\00\00\00\e4\08\01\00\fd\03\01\00Z\00F\00l\0a\01\00\80\00\01\00\0c\00\00\00\01\00\00\00\08\09\01\00\b4\07\01")
  (data $.data (i32.const 68268) "0\0d\01\00\00\00\00\00\b8\0d\01\00\c1\82\01\00\00\00\00\00\04\00\00\00\0c\00\00\00\01\00\00\00\00\00\00\00\01\00\00\00\00\00\00\00\02\00\00\00\10\00\01\00\04\00\00\00\14\00\01\00\03\00\00\00\17\00\01\00\05\00\00\00\1c\00\01\00\07"))
