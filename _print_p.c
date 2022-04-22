#include "main.h"

/**
 * print_p - prints the value of a pointer;
 * @a: pointer
 * @buff: buffer for printing
 *
 * Return: number of bytes printed
 */
int print_p(void *a, char *buff)
{
	unsigned long int x = (unsigned long int) a;

	print_s("hello\n", buff);
	return (printf("%lu\n", x));

}
