#ifndef SIMPLE_H
#define SIMPLE_H

#define LOG_INFO(log_str, args...) printk(KERN_INFO log_str, ## args);
#endif /*SIMPLE_H*/
