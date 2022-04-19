#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    _printf("%b\n", 0);
    _printf("%o\n", 98);
    _printf("%x\n", 56741);
    _printf("%X\n", -56741);
    _printf("%u\n", 0);
    _printf("i %i\n", -INT_MAX);
    _printf("d %d\n", -INT_MAX);
    _printf("%d\n", 0);
    return (0);
}
