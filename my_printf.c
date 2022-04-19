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
	int i = 0, x;

	while (*a != '\0')
	{
		if (*a == '%')
		{
			a++;
			if (*a == 'c')
				x = print_c(va_arg(lis, int));
			else if (*a == 'b')
				x = print_b(va_arg(lis, unsigned int));
			else if (*a == 'x' || *a == 'X')
				x = print_x(va_arg(lis, unsigned int)
						, *a == 'x');
			else if (*a == 'o')
				x = print_o(va_arg(lis, unsigned int));
			else if (*a == 'u')
				x = print_u(va_arg(lis, unsigned int));
			else if (*a == 's')
				x = print_s(va_arg(lis, char *));
			else if (*a == 'd' || *a == 'i')
				x = print_d(va_arg(lis, int));
			else if (*a == '%')
				x = print_c('%');
			else
			{
				x = print_c('%');
				x += print_c(*a);
			}
		}
		else
			x = print_c(*a);
		if (x == -1)
			return (x);
		i += x;
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
