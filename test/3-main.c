#include "main.h"

/**
 * main - Entry point
 *
 * Test for different possible outcomes
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

    _printf("%b\n", 98);
    _printf("%b\n", 0);
    _printf("%o\n", 98);
    _printf("%x\n", 56741);
    _printf("%X\n", 56741);
    _printf("%u\n", 0);
    i = _printf("i %i\n", -INT_MAX);
    printf("len: %d\n", i);
    i = printf("d %d\n", -INT_MAX);
    printf("len2: %d\n", i);
    _printf("%d\n", 0);
    return (0);
}
