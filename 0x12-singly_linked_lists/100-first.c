#include<stdio.h>

/**
 * myStartupFun - function Applies constructor attribute to myStartupFun
 *   is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - function implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
