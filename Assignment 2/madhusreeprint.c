#include <linux/kernel.h>
#include <linux/linkage.h>
#include <linux/syscalls.h>
#include <linux/uaccess.h>
/* function to print string to kernel */
/* syscall number 333 */
SYSCALL_DEFINE1(madhusreeprint,
		char __user *, src)
{
        char buf[256];
        
        if( copy_from_user(buf, src, 256) ){
    		return -1;
	}
    
        printk("madhusreeprint() called with string : %s\n", buf);
    
        return 0;
}
