#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);

		if (separator == NULL)
			separator = "";
		for (i = 0; i < n - 1; i++)
			printf("%i%s", va_arg(ap, int), separator);
		printf("%i", va_arg(ap, int));

		va_end(ap);
	}
	printf("\n");
}
