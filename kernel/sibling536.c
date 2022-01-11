#include <linux/types.h>
#include <linux/syscalls.h>
#include <linux/errno.h>

SYSCALL_DEFINE3(getsiblings, pid_t, pid, pid_t __user *, pidbuf, int, capacity)
{
	printk("in getsiblings(): %d %d\n", pid, capacity);

	return EPERM;
}

