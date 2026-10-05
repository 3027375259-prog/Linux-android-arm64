## android12-5.10 build failure
=== prepare.log (errors) ===
--- tail ---
  SYNC    include/config/auto.conf.cmd
  CALL    scripts/atomic/check-atomics.sh
  CALL    scripts/checksyscalls.sh
=== mod.log (errors) ===
74:llvm-objdumpllvm-objdump: llvm-objdump: : error: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_encode/arm64_encode.o''/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_immediate.o: ': The file was not recognized as a valid object file
76:error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode.o': The file was not recognized as a valid object file
150:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_branch.o': The file was not recognized as a valid object file
152:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_register.o': The file was not recognized as a valid object file
178:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_sve.o': The file was not recognized as a valid object file
181:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_ldst.o': The file was not recognized as a valid object file
183:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_sme.o': The file was not recognized as a valid object file
282:llvm-objdump: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/virtual_input.herror: ':259:9: warning: mixing declarations and code is incompatible with standards before C99 [-Wdeclaration-after-statement]
9782:nput3llvm-objdump,/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:  :u4753i:n24t:6 4warning: _error: unused function 'casal_addr_x' [-Wunused-function]t
22947: 12194 | ARM64_HW_TEMPLATE void simd_fmaxnmp_2s(llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/emulate_inst.o': The file was not recognized as a valid object file
24345:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_ldst.o': The file was not recognized as a valid object file
33168:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_immediate.o': The file was not recognized as a valid object file
40259: 13570 | ARM64_HW_TEMPLATE void llvm-objdumpfp: _fmadd_error: d(u'i/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.on't: 64_tThe file was not recognized as a valid object file 
40368:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_register.o': The file was not recognized as a valid object file
40370:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_simd.o': The file was not recognized as a valid object file
40376:make[2]: *** No rule to make target '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.mod.o', needed by '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.ko'.  Stop.
40377:make[1]: *** [scripts/Makefile.modpost:174: __modpost] Error 2
40378:make: *** [Makefile:1871: modules] Error 2
--- tail ---
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13713:24: warning: unused function 'fp_fcmpe_zero_s' [-Wunused-function]
 13713 | ARM64_HW_TEMPLATE void fp_fcmpe_zero_s(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13720:24: warning: unused function 'fp_fcmpe_zero_d' [-Wunused-function]
 13720 | ARM64_HW_TEMPLATE void fp_fcmpe_zero_d(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
       |                        ^~~~~~~~~~~~~~~
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:13732:24: warning: unused function 'movn_w32' [-Wunused-function]
 13732 | ARM64_HW_TEMPLATE void movn_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
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
2398 warnings generated.
llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_register.o': The file was not recognized as a valid object file
1081 warnings generated.
llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_simd.o': The file was not recognized as a valid object file
  LD [M]  /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.o
WARNING: Symbol version dump "Module.symvers" is missing.
         Modules may not have dependencies or modversions.
  MODPOST /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/Module.symvers
WARNING: modpost: Symbol info of vmlinux is missing. Unresolved symbol check will be entirely skipped.
make[2]: *** No rule to make target '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.mod.o', needed by '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/helloworld_test.ko'.  Stop.
make[1]: *** [scripts/Makefile.modpost:174: __modpost] Error 2
make: *** [Makefile:1871: modules] Error 2
=== build.log (errors) ===
--- tail ---
  CALL    scripts/atomic/check-atomics.sh
  CALL    scripts/checksyscalls.sh
  CHK     include/generated/compile.h
  CHK     kernel/kheaders_data.tar.xz
