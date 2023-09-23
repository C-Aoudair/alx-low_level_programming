#include <stdio.h>


/**
 * first - Executed before the main function.
 *
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	char *str = "I bore my house upon my back!";

	printf("You're beat! and yet, you must allow,\n%s\n", str);
}
