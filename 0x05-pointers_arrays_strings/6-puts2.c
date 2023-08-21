#include "main.h"
/**
 * puts2 - print the characters of a string.
 * @str: the string.
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}

