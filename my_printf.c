#include <stdarg.h>
#include "main.h"
/**
 * print_c - prints character
 * @a: character
 *
 * Return: bytes printed
 */
int print_c(char a)
{
	return (write(1, &a, 1));
}

/**
 * print_d - prints an decimal number
 * @n: the number to be printed
 *
 * Return: bytes printed
 */
int print_d(int n)
{
	int size = sizeof(int) == 4 ? 10 : 5;
	char *a, *b;

	if (n < 0)
		size += 1;
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (0);
	b = &a[size - 1];
	size = (n < 0 ? -n : n);
	while (size > 0)
	{
		*b = ('0' + (size % 10));
		if (size >= 10)
			--b;
		size /= 10;
	}
	if (n < 0)
	{
		--b;
		*b = '-';
	}
	size = print_s(b);
	free(a);
	return (size);
}

/**
 * _printf - printf that handles c, s and %
 * @format: format of the printf
 *
 * Return: the number of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list lis;
	char *a = (char *) format;

	if (format == NULL)
		return (0);
	va_start(lis, format);
	while (*a != '\0')
	{
		if (*a == '%')
		{
			a++;
			if (*a == 'c')
				i += print_c(va_arg(lis, int));
			if (*a == 'b')
				i += print_b(va_arg(lis, unsigned int));
			else if (*a == 's')
				i += print_s(va_arg(lis, char *));
			else if (*a == 'd' || *a == 'i')
				i += print_d(va_arg(lis, int));
			else if (*a == '%')
				i += print_c('%');
			else
			{
				i += print_c('%');
				i += print_c(*a);
			}
		}
		else
			i += print_c(*a);
		a++;
	}
	va_end(lis);
	return (i);
}
