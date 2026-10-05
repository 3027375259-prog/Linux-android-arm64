//#include "arm64_dptdbg.h"
static int set_process_dptdbg(struct break_point *info)
{
    return -EINVAL;
    // if (!info) return -EINVAL;
    // prepare_break_point_handlers(info);
    // return dptdbg_start_monitor(info);
}

static void remove_process_dptdbg(void)
{
    // struct break_point *info = g_dptdbg_info;
    // dptdbg_stop_monitor();
    // if (info) __builtin_memset(info, 0, sizeof(*info));
}