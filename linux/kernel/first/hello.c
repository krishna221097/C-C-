#include<linux/module.h> //needed for all modules
#include<linux/kernel.h> //needed for kern_info
#include<linux/init.h>   //needed for the macros

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sri Krishna");
MODULE_DESCRIPTION("Hello program");
MODULE_VERSION("0.1");

static int __init hello_start(void)
{
	printk(KERN_INFO "Loading hello module Krishna...\n");
	printk(KERN_INFO "Hello all\n");
	return 0;
}

static void __exit hello_end(void)
{
	printk(KERN_INFO "Goodbye\n");
}
module_init(hello_start);
module_exit(hello_end);
