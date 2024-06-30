#include <linux/kernel.h>
#include<linux/cred.h>
asmlinkage long madhusreeprocess(void)
{
        printk("madhusreeprocess | 	  PID : %ld\n", current->pid);
        printk("madhusreeprocess | Parent PID : %ld\n", (current->parent)->pid);
        return 0;
}
