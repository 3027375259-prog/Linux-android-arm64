/*
 * hello_kpm — SukiSU KPM 管线验证模块
 * 验证: 构建 -> ksud kpm load -> init -> ctl0 -> unload 全链路
 * 仅引用 printk 一个内核符号, 最大化加载器符号解析兼容性
 * ABI 与 KernelPatch kpmodule.h 一致(自带宏, 无 SDK 依赖)
 */

typedef long (*mod_initcall_t)(const char *args, const char *event, void *reserved);
typedef long (*mod_ctl0call_t)(const char *ctl_args, char *out_msg, int outlen);
typedef long (*mod_exitcall_t)(void *reserved);

#define KPM_INFO(key, info, limit)                                     \
    _Static_assert(sizeof(info) <= (limit), "info string too long");   \
    static const char __kpm_info_##key[] __attribute__((__used__))     \
    __attribute__((section(".kpm.info"), unused, aligned(1))) = #key "=" info

#define KPM_NAME(x)        KPM_INFO(name, x, 32)
#define KPM_VERSION(x)     KPM_INFO(version, x, 32)
#define KPM_LICENSE(x)     KPM_INFO(license, x, 32)
#define KPM_AUTHOR(x)      KPM_INFO(author, x, 32)
#define KPM_DESCRIPTION(x) KPM_INFO(description, x, 512)

#define KPM_INIT(fn)                                                           \
    static mod_initcall_t __kpm_initcall_##fn __attribute__((__used__))        \
    __attribute__((__section__(".kpm.init"))) = fn
#define KPM_CTL0(fn)                                                           \
    static mod_ctl0call_t __kpm_ctlmodule_##fn __attribute__((__used__))       \
    __attribute__((__section__(".kpm.ctl0"))) = fn
#define KPM_EXIT(fn)                                                           \
    static mod_exitcall_t __kpm_exitcall_##fn __attribute__((__used__))        \
    __attribute__((__section__(".kpm.exit"))) = fn

extern int printk(const char *fmt, ...);

KPM_NAME("hello_kpm");
KPM_VERSION("0.1.0");
KPM_LICENSE("GPL v2");
KPM_AUTHOR("cf_bp");
KPM_DESCRIPTION("pipeline test: build/load/ctl0/unload");

static long hello_init(const char *args, const char *event, void *reserved)
{
    (void)reserved;
    printk("hello_kpm: init ok, event=%s, args=%s\n",
           event ? event : "(null)", args ? args : "(null)");
    return 0;
}

static long hello_ctl0(const char *ctl_args, char *out_msg, int outlen)
{
    printk("hello_kpm: ctl0 called, args=%s, outlen=%d\n",
           ctl_args ? ctl_args : "(null)", outlen);
    (void)out_msg; /* 回包通道(copy_to_user)等 DPT 阶段再启用 */
    return 0x1234; /* 用户态可见的魔数, 证明 ctl0 控制通道已通 */
}

static long hello_exit(void *reserved)
{
    (void)reserved;
    printk("hello_kpm: exit\n");
    return 0;
}

KPM_INIT(hello_init);
KPM_CTL0(hello_ctl0);
KPM_EXIT(hello_exit);
