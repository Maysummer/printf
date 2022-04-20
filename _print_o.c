#include "main.h"

/**
 * print_o - prints the octal form of an integer
 * @n: integer to print
 * @buff: buffer for printing
 *
 * Return: number of bytes printed
 */
int print_o(unsigned int n, char *buff)
{
	char *a, *b;
	int i = sizeof(int) == 4 ? 12 : 7;

	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (-1);
	b = &a[i - 1];
	*b = '\0';
	--b;
	if (n == 0)
		*b = '0';
	while (n > 0)
	{
		*b = ('0' + (n % 8));
		if (n >= 8)
			--b;
		n /= 8;
	}
	i = print_s(b, buff);
	free(a);
	return (i);
}
