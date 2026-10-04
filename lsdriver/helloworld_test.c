// 最小测试模块: 仅用于验证"模块加载环境"是否正常
// 不含任何 hook/页表/网络/CFI 操作 —— 如果它也无法加载, 问题在加载器环境
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("minimal load test");

static int __init hello_test_init(void)
{
    pr_info("hello_test: init ok, module loader works\n");
    return 0;
}

static void __exit hello_test_exit(void)
{
    pr_info("hello_test: exit\n");
}

module_init(hello_test_init);
module_exit(hello_test_exit);
