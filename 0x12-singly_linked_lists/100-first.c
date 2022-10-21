#include <stdio.h>

/* constructor in c */

void msg_constructor(void) __attribute__((constructor));

/**
 * msg - print message before main executes
 */

void msg_constructor(void)
{
	printf("You're beat! and yet, you must allow,
			\nI bore my house upon my back!\n");
}
