/*******************hello********************/
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xdl");
MODULE_DESCRIPTION("A hello module");
MODULE_VERSION("V1.0.0");
MODULE_ALIAS("printf_hello");

static char *name = "world xdl";
module_param(name , charp , S_IRUGO);
MODULE_PARM_DESC(name , "who this module say hello to");

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello %s ,this is hello module speaking\n " ,name);
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Hello : Goodbye %s\n" , name);
}

module_init(hello_init);
module_exit(hello_exit);


