#include<linux/init.h>
#include<linux/module.h>
#include<linux/moduleparam.h>
//create variable
int param_var=0;

//register var
//name,type,permissions
module_param(param_var,int,S_IRUSR|S_IWUSR);

void display(void)
{
printk(KERN_ALERT "parameter value=%d",param_var);
}

static int hello_init(void) 
{ 
//printk(KERN_INFO "Loading hello module...\n"); 
	printk(KERN_INFO "Hello worlddd\n"); 
	display();
	return 0; 
} 

static void hello_exit(void) 
{ 
printk(KERN_INFO "Goodbye Mr.\n"); 
} 

module_init(hello_init); 
module_exit(hello_exit);
