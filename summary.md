## android13-5.15 build failure
=== prepare.log (errors) ===
--- tail ---
  SYNC    include/config/auto.conf.cmd
  CALL    scripts/atomic/check-atomics.sh
  CALL    scripts/checksyscalls.sh
=== build.log (errors) ===
--- tail ---
  CALL    scripts/atomic/check-atomics.sh
  CALL    scripts/checksyscalls.sh
  CHK     include/generated/compile.h
  CHK     kernel/kheaders_data.tar.xz
=== mod.log (errors) ===
73:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode.o': The file was not recognized as a valid object file
76:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_immediate.o': The file was not recognized as a valid object file
78:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_encode/arm64_encode.o': The file was not recognized as a valid object file
150:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_register.o': The file was not recognized as a valid object file
152:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_branch.o': The file was not recognized as a valid object file
178:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_sve.o': The file was not recognized as a valid object file
180:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_sme.o': The file was not recognized as a valid object file
183:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_ldst.o': The file was not recognized as a valid object file
186:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_decode/arm64_decode_simd.o': The file was not recognized as a valid object file
13763:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_branch.o': ARM64_HW_TEMPLATE void ldsetal_x(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
17725:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/emulate_inst.o': The file was not recognized as a valid object file
17778:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:99:35: error: implicit declaration of function 'set_process_hwbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17785:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:102:21: error: implicit declaration of function 'remove_process_hwbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17788:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:105:35: error: implicit declaration of function 'set_process_ptebp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17791:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:108:21: error: implicit declaration of function 'remove_process_ptebp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17794:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:111:35: error: implicit declaration of function 'set_process_stepbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17801:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:114:21: error: implicit declaration of function 'remove_process_stepbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17817:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:539:9: error: implicit declaration of function 'remove_process_hwbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17820:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:540:9: error: implicit declaration of function 'remove_process_ptebp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17823:/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver.c:542:9: error: implicit declaration of function 'remove_process_stepbp' is invalid in C99 [-Werror,-Wimplicit-function-declaration]
17839:make[1]: *** [/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/Makefile:23: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/lsdriver_main.o] Error 1
17840:make[1]: *** Waiting for unfinished jobs....
24195:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_immediate.o': The file was not recognized as a valid object file
24245:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_ldst.o': The file was not recognized as a valid object file
27113:llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_simd.o': The file was not recognized as a valid object file
27114:make: *** [Makefile:1952: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver] Error 2
--- tail ---
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14238:24: warning: unused function 'crc32ch' [-Wunused-function]
ARM64_HW_TEMPLATE void crc32ch(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14244:24: warning: unused function 'crc32cw' [-Wunused-function]
ARM64_HW_TEMPLATE void crc32cw(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14250:24: warning: unused function 'crc32cx' [-Wunused-function]
ARM64_HW_TEMPLATE void crc32cx(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14259:24: warning: unused function 'smax_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void smax_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14266:24: warning: unused function 'smax_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void smax_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14273:24: warning: unused function 'umax_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void umax_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14280:24: warning: unused function 'umax_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void umax_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14287:24: warning: unused function 'smin_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void smin_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14294:24: warning: unused function 'smin_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void smin_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14301:24: warning: unused function 'umin_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void umin_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14308:24: warning: unused function 'umin_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void umin_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14318:24: warning: unused function 'extract_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void extract_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14325:24: warning: unused function 'extract_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void extract_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14332:24: warning: unused function 'sbfm_dynamic_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void sbfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14339:24: warning: unused function 'sbfm_dynamic_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void sbfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14346:24: warning: unused function 'bfm_dynamic_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void bfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14353:24: warning: unused function 'bfm_dynamic_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void bfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14360:24: warning: unused function 'ubfm_dynamic_w32' [-Wunused-function]
ARM64_HW_TEMPLATE void ubfm_dynamic_w32(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_hw_templates.h:14366:24: warning: unused function 'ubfm_dynamic_w64' [-Wunused-function]
ARM64_HW_TEMPLATE void ubfm_dynamic_w64(uint64_t input0, uint64_t input1, uint64_t input2, uint64_t input3, uint64_t input4, void *output)
                       ^
1081 warnings generated.
llvm-objdump: error: '/home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver/arm64_emulate/arm64_emulate_simd.o': The file was not recognized as a valid object file
make: *** [Makefile:1952: /home/runner/work/Linux-android-arm64/Linux-android-arm64/lsdriver-src/lsdriver] Error 2
