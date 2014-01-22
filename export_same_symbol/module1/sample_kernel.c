#include <linux/module.h>
#include <linux/kernel.h>

#define define_int(x) int x;
define_int(MACRO);
EXPORT_SYMBOL(MACRO);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Author");
MODULE_DESCRIPTION("\"Hello, world!\" minimal module");

int init(void)
{
    printk("<1>Hello world 1.\n");
    MACRO = 1;
    printk("\nMacro = %d\n", MACRO++);
    printk("After incrementing MACRO = %d\n", MACRO);
    return 0;
} 

void cleanup(void)
{
    printk(KERN_ALERT "Goodbye world 1.\n");
}
module_init(init);
module_exit(cleanup);
