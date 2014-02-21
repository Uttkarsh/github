#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kthread.h>  // for threads
#include <linux/sched.h>  // for task_struct
#include <linux/time.h>   // for using jiffies 
#include <linux/timer.h>
#include <linux/slab.h>

#define stringize(arg) #arg
#define use_macro_as_string(name) stringize(name)

static struct task_struct *thread;

int thread_fn(void *data) {


	printk(KERN_INFO "In thread");
	while(!kthread_should_stop()){
		schedule();
		set_current_state(TASK_INTERRUPTIBLE);
	}
	set_current_state(TASK_RUNNING);
	return 0;
}

int thread_init (void) {

	char  *our_thread;
	our_thread = kmalloc(100, GFP_KERNEL);
	strcpy(our_thread, "s_k");
	our_thread[strlen(our_thread)] = '\0';
	printk(KERN_INFO "in init");
	printk(use_macro_as_string(JUST_MACRO));
	printk("\nThis is name of thread - %s:%d: %s: %d", our_thread, 1, use_macro_as_string(MACRO), 99);
	thread = kthread_create(thread_fn, NULL,"%s:%d: %s: %d", our_thread, 1,
							se_macro_as_string(MACRO), 99);
	if((thread))
	{
		printk(KERN_INFO "in if");
		wake_up_process(thread);
	}

	return 0;
}

void thread_cleanup(void)
{
	int ret ;
	ret = kthread_stop(thread);
	printk("\nStopping thread");
	if(!ret)
		printk("Unable to stop thread");
	

}
MODULE_LICENSE("GPL");   
module_init(thread_init);
module_exit(thread_cleanup);
