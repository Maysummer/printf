#include "main.h"

/**
 * print_x - prints the hex form of an integer
 * @n: integer to print
 * @flag: to show the case of letters
 * @buff: buffer for printing
 *
 * Return: number of bytes printed
 */
int print_x(unsigned int n, short flag, char *buff)
{
	char *a, *b;
	int i = sizeof(int) == 4 ? 10 : 6;

	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (0);
	b = &a[i - 1];
	*b = '\0';
	--b;
	if (n == 0)
		*b = '0';
	while (n > 0)
	{
		i =  (n % 16);
		if (i >= 10)
		{
			if (flag)
				*b = ('a' + (i - 10));
			else
				*b = ('A' + (i - 10));
		}
		else
			*b = ('0' + i);
		if (n >= 16)
			--b;
		n /= 16;
	}
	i = print_s(b, buff);
	free(a);
	return (i);
}
