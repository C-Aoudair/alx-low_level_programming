#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


void print_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}
void print_char(va_list ap)
{
	printf("%c", (char)va_arg(ap, int));
}
void print_float(va_list ap)
{
	printf("%f", (float)va_arg(ap, int));
}
void print_string(va_list ap)
{
	char *str;
	str = va_arg(ap, char*);
	printf("%s", str);
}
/**
 * print_all - prints anything.
 * @format: The list of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	printer print[4] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_string}
	};
	int i;
	int j;

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == print[j].c)
			{
				print[j].f(ap);
				printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
int main(void)
{
	    print_all("iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiic", 'a', 'b', 'c', 'd', 'e', 'f','A', 'B', 'C', 'D', 'E', 'F');
	        return (0);
}

