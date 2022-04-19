#include "main.h"

/**
 * print_s - prints a string
 * @a: pointer to the string
 *
 * Return: bytes printed
 */
int print_s(char *a)
{
	int i = 0;

	if (a == NULL)
		return (-1);
	while (a[i] != '\0')
		i++;
	return (write(1, a, i));
}

