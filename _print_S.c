#include "main.h"

/**
 * print_S - prints a string
 * @a: pointer to the string
 * @buff: buffer for printing
 *
 * Return: bytes printed
 */
int print_S(char *a, char *buff)
{
	int i = 0;
	int n, j;

	if (a == NULL)
		return (-1);
	while (*a != '\0')
	{
		if ((*a > 0 && *a < 32) || *a >= 127)
		{
			n = (int) *a;
			*buff = '\\';
			buff++;
			*buff = 'x';
			buff++;
			j = n % 16;
			n /= 16;
			*buff = (n % 16) >= 10 ? 'A' + (10 - (n % 16)) : '0' + (n % 16);
			buff++;
			*buff = j >= 10 ? 'A' + (10 - j) : ('0' + j);
			buff++;
			a++;
			i += 4;
		}
		else
		{
			*buff = *a;
			buff++;
			i++;
			a++;
		}
	}
	return (i);
}

