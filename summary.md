## android16-6.12 build failure
=== prepare.log (errors) ===
--- tail ---
  SYNC    include/config/auto.conf.cmd
  CALL    scripts/checksyscalls.sh
=== mod.log (errors) ===
37271:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.mod.c:28:1: error: expected expression
37275:make[2]: *** [scripts/Makefile.modfinal:33: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.mod.o] Error 1
37276:make[2]: *** Waiting for unfinished jobs....
37277:make[1]: *** [/home/runner/work/Linux-android-arm64/Linux-android-arm64/kernel/Makefile:1941: modules] Error 2
37278:make: *** [Makefile:242: __sub-make] Error 2
--- tail ---
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13756:24: warning: unused function 'movk_w32' [-Wunused-function]
 13756 | ARM64_HW_TEMPLATE void movk_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13762:24: warning: unused function 'movk_w64' [-Wunused-function]
 13762 | ARM64_HW_TEMPLATE void movk_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14318:24: warning: unused function 'extract_w32' [-Wunused-function]
 14318 | ARM64_HW_TEMPLATE void extract_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14325:24: warning: unused function 'extract_w64' [-Wunused-function]
 14325 | ARM64_HW_TEMPLATE void extract_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14332:24: warning: unused function 'sbfm_dynamic_w32' [-Wunused-function]
 14332 | ARM64_HW_TEMPLATE void sbfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14339:24: warning: unused function 'sbfm_dynamic_w64' [-Wunused-function]
 14339 | ARM64_HW_TEMPLATE void sbfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14346:24: warning: unused function 'bfm_dynamic_w32' [-Wunused-function]
 14346 | ARM64_HW_TEMPLATE void bfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14353:24: warning: unused function 'bfm_dynamic_w64' [-Wunused-function]
 14353 | ARM64_HW_TEMPLATE void bfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14360:24: warning: unused function 'ubfm_dynamic_w32' [-Wunused-function]
 14360 | ARM64_HW_TEMPLATE void ubfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14366:24: warning: unused function 'ubfm_dynamic_w64' [-Wunused-function]
 14366 | ARM64_HW_TEMPLATE void ubfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~~
1903 warnings generated.
931 warnings generated.
  LD [M]  /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.o
  MODPOST /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/Module.symvers
WARNING: ./Module.symvers is missing.
         Modules may not have dependencies or modversions.
         You may get many unresolved symbol errors.
         You can set KBUILD_MODPOST_WARN=1 to turn errors into warning
         if you want to proceed at your own risk.
WARNING: modpost: "mutex_lock" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "mutex_unlock" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "_raw_spin_lock_irqsave" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "__wake_up" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "register_kprobe" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "unregister_kprobe" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "preempt_schedule" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "strstr" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "_printk" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "__fortify_panic" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: suppressed 93 unresolved symbol warnings because there were too many)
  CC [M]  /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.mod.o
  CC [M]  /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/.module-common.o
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.mod.c:28:1: error: expected expression
   28 | ;
      | ^
1 error generated.
make[2]: *** [scripts/Makefile.modfinal:33: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.mod.o] Error 1
make[2]: *** Waiting for unfinished jobs....
make[1]: *** [/home/runner/work/Linux-android-arm64/Linux-android-arm64/kernel/Makefile:1941: modules] Error 2
make: *** [Makefile:242: __sub-make] Error 2
=== build.log (errors) ===
--- tail ---
  CALL    scripts/checksyscalls.sh
  CHK     kernel/kheaders_data.tar.xz
