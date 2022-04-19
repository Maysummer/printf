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
 * check_flags - checks for flags
 * @a: pointer to format string
 * @lis: pointer to va_list
 *
 * Return: number of bytes printed
 */
int check_flags(char *a, va_list lis)
{
	int i = 0;

	while (*a != '\0')
	{
		if (*a == '%')
		{
			a++;
			if (*a == 'c')
				i += print_c(va_arg(lis, int));
			else if (*a == 'b')
				i += print_b(va_arg(lis, unsigned int));
			else if (*a == 'x' || *a == 'X')
				i += print_x(va_arg(lis, unsigned int)
						, *a == 'x');
			else if (*a == 'o')
				i += print_o(va_arg(lis, unsigned int));
			else if (*a == 'u')
				i += print_u(va_arg(lis, unsigned int));
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
	return (i);
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
		return (-1);
	va_start(lis, format);
	i = check_flags(a, lis);
	va_end(lis);
	return (i);
}
