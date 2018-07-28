#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function with 2 parameter
 * @format: char type pointer to string
 *
 * Description: prints anything followed by a new line
 * Return: na
 */
void print_all(const char * const format, ...)
{
	int j;
	char *s;
	char *space;
	va_list ap;

	va_start(ap, format);
	j = 0;
	while (format[j] != '\0')
	{
		space = "";
		if (format[j + 1])
			space = ", ";
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), space);
			break;
		case 'i':
			printf("%i%s", va_arg(ap, int), space);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), space);
			break;
		case 's':
			s = va_arg(ap, char *);
			if (!s)
				s = "(nil)";
			printf("%s%s", s, space);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
