#include "main.h"

/**
 * print_b - prints the binary form of an integer
 * @n: integer to print
 *
 * Return: number of bytes printed
 */
int print_b(unsigned int n)
{
	char *a, *b;
	int i = sizeof(int) == 4 ? 33 : 17;

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
		*b = ('0' + (n % 2));
		if (n >= 2)
			--b;
		n /= 2;
	}
	i = print_s(b);
	free(a);
	return (i);
}
