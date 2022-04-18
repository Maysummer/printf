#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - prints character
 * @a: pointer to the character
 *
 * Return: bytes printed
 */
int print_c(char a)
{
	char *b = &a;

	return (write(1, b, 1));
}

/**
 * print_s - prints a string
 * @a: pointer to the string
 *
 * Return: bytes printed
 */
int print_s(char *a)
{
	int i = 0;

	while (a[i++] != '\0')
		;
	return (write(1, a, i));
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
			else if (*a == 's')
				i += print_s(va_arg(lis, char *));
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
