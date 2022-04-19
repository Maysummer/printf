#include "main.h"

/**
 * print_x - prints the hex form of an integer
 * @n: integer to print
 * @flag: to show the case of letters
 *
 * Return: number of bytes printed
 */
int print_x(unsigned int n, short flag)
{
	char *a = malloc(sizeof(char) * 9), *b;
	int i = 0;

	if (a == NULL)
		return (0);
	b = &a[31];
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
	i = print_s(b);
	free(a);
	return (i);
}
