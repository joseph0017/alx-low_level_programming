#include <stdio.h>

void msg_constructor(void) __attribute__((constructor));

/**
 * msg - print message before main executes
 */

void msg_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
