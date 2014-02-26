#include <linux/module.h>
#include <linux/kernel.h>
#include "simple_header.h"

MODULE_LICENSE("GPL");

int init(void)
{
        LOG_INFO("<1>Hello world 1.\n");
        return 0;
}

void cleanup(void)
{
        printk(KERN_ALERT "Goodbye world 1.\n");
}
module_init(init);
module_exit(cleanup);                       
