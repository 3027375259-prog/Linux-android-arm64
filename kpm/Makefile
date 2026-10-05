# KPM 模块构建 (SukiSU-Ultra / KernelPatch ABI)
# 产物: ET_REL 可重定位 ELF, .kpm.* 特殊节, 未定义符号由内核加载器从 kallsyms 解析
# 参考: bmax121/KernelPatch lkm/kpm/ + Ccccccccvvm/dsp_bypass

CC ?= clang
ARCHFLAGS := --target=aarch64-linux-gnu -march=armv8-a
CFLAGS := -O2 -nostdinc -ffreestanding -fno-stack-protector \
          -fno-pic -fno-pie -fno-common -mgeneral-regs-only -Wall

KPMS := $(patsubst %.c,%.kpm,$(wildcard *.c))

all: $(KPMS)

%.o: %.c
	$(CC) $(ARCHFLAGS) $(CFLAGS) -c -o $@ $<

%.kpm: %.o
	$(CC) $(ARCHFLAGS) -r -nostdlib -o $@ $^

clean:
	rm -f *.o *.kpm

.PHONY: all clean
