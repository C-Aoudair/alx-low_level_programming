#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line.
 * @s: The string that must be printed.
 *
 * Rrturn: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
