#include <stddef.h>
/**
 * print_name - prints a name.
 * @name: The name.
 * @f: A pointer to a funtion that prints the name.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL))
		f(name);
}
