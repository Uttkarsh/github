#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Author");
MODULE_DESCRIPTION("\"Hello, world!\" minimal module");

int init(void)
{
        printk("<1>Hello world 1.\n");
        return 0;
}

void cleanup(void)
{
        printk(KERN_ALERT "Goodbye world 1.\n");
}
module_init(init);
module_exit(cleanup);                       
