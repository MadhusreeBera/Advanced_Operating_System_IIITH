#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/syscalls.h>
#include <linux/uaccess.h>

asmlinkage long madhusreegetpid(void)

{     
        return task_tgid_vnr(current);
}