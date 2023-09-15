#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - Prints string followed by new line.
 * @separator: String to be printed between the strings.
 * @n: The number of the strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}

		va_end(ap);
	}
	printf("\n");
}
