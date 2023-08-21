#include "main.h"
/**
 * puts_half - prints half on a string.
 * @str: the string.
 *
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = i;
	for (i = i / 2; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
