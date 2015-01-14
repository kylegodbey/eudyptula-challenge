#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void){

printk(KERN_ALERT "Hello World!\n");

return 0;
}

void cleanup_module(void){

printk(KERN_ALERT "And now the world ends..\n");
}
