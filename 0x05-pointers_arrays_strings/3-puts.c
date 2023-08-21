#include "main.h"
/**
 * _puts - print a string to the standard outputs.
 * @str: the string.
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putcahr('\n');
}

