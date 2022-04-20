#include "main.h"

/**
 * print_s - prints a string
 * @a: pointer to the string
 * @buff: buffer for printing
 *
 * Return: bytes printed
 */
int print_s(char *a, char *buff)
{
	int i = 0;

	if (a == NULL)
		return (print_s("(null)", buff));
	while (a[i] != '\0')
	{
		*buff = a[i];
		buff++;
		i++;
	}
	return (i);
}

