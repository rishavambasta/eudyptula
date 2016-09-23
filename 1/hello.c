/*  hello.c - Prints "Hello World!" in the kernel logs
 *  Author       : Rishav Ambasta <kooolrishav@gmail.com>
 *  Date Created : 22/09/2016
 */
/* Kernel Programming */
//#define MODULE
//#define LINUX
//#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


/* Prototyping init funtions */
static int hello_init (void);
static void hello_cleanup (void);


static int hello_init (void)
{
	printk (KERN_ALERT "Hello World!\n");
	return 0;
}

static void hello_cleanup (void)
{
	printk (KERN_ALERT "Unloading Hello\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

MODULE_LICENSE ("GPL"); //Not tainting the kernel

MODULE_AUTHOR ("Rishav Ambasta <kooolrishav@gmail.com>");
MODULE_DESCRIPTION ("A module to log Hello World!");
