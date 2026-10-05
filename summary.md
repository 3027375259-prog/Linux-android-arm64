## android14-6.1 build failure
=== prepare.log (errors) ===
--- tail ---
  SYNC    include/config/auto.conf.cmd
  CALL    scripts/checksyscalls.sh
=== mod.log (errors) ===
37268:make[1]: *** No rule to make target '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.mod.o', needed by '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.ko'.  Stop.
37269:make: *** [Makefile:1983: modules] Error 2
--- tail ---
       |                        ^~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13738:24: warning: unused function 'movn_w64' [-Wunused-function]
 13738 | ARM64_HW_TEMPLATE void movn_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13744:24: warning: unused function 'movz_w32' [-Wunused-function]
 13744 | ARM64_HW_TEMPLATE void movz_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13750:24: warning: unused function 'movz_w64' [-Wunused-function]
 13750 | ARM64_HW_TEMPLATE void movz_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~
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
WARNING: Module.symvers is missing.
         Modules may not have dependencies or modversions.
         You may get many unresolved symbol warnings.
WARNING: modpost: "mutex_lock" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "mutex_unlock" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "_raw_spin_lock_irqsave" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "__wake_up" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "register_kprobe" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "unregister_kprobe" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "preempt_schedule" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "strstr" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "_printk" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: "fortify_panic" [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.ko] undefined!
WARNING: modpost: suppressed 91 unresolved symbol warnings because there were too many)
make[1]: *** No rule to make target '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.mod.o', needed by '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.ko'.  Stop.
make: *** [Makefile:1983: modules] Error 2
=== build.log (errors) ===
--- tail ---
  CALL    scripts/checksyscalls.sh
  CHK     kernel/kheaders_data.tar.xz
