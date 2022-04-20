#include <stdarg.h>
#include "main.h"

/**
 * check_flags - checks for flags
 * @a: pointer to format string
 * @lis: pointer to va_list
 * @buff: for printing
 *
 * Return: number of bytes printed
 */
int check_flags(char *a, va_list lis, char *buff)
{
	int i = 0, x;

	while (*a != '\0')
	{
		x = 0;
		if (*a == '%')
		{
			a++;
			if (*a == 'c')
				buff[i++] = (char)va_arg(lis, int);
			else if (*a == 'b')
				x = print_b(va_arg(lis, unsigned int), &buff[i]);
			else if (*a == 'x' || *a == 'X')
				x = print_x(va_arg(lis, unsigned int), *a == 'x', &buff[i]);
			else if (*a == 'o')
				x = print_o(va_arg(lis, unsigned int), &buff[i]);
			else if (*a == 'u')
				x = print_u(va_arg(lis, unsigned int), &buff[i]);
			else if (*a == 's')
				x = print_s(va_arg(lis, char *), &buff[i]);
			else if (*a == 'S')
				x = print_S(va_arg(lis, char *), &buff[i]);
			else if (*a == 'd' || *a == 'i')
				x = print_d(va_arg(lis, int), &buff[i]);
			else if (*a == '%')
				buff[i++] = '%';
			else
			{
				buff[i++] = '%';
				buff[i++] = *a;
			}
		}
		else
			buff[i++] = *a;
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
	char *a = (char *)format, *buff = malloc(sizeof(char) * 1024);

	if (format == NULL || buff == NULL)
		return (-1);
	va_start(lis, format);
	i = check_flags(a, lis, buff);
	if (i > 0)
		write(1, buff, i);
	va_end(lis);
	free(buff);
	return (i);
}
