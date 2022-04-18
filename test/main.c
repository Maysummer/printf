#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int n;

    n = 0x45;
    len = _printf("Let's try to printf a simple sentence. %d %i  %% %s %c\n", 15, n, "my name", 'm');
    len2 = printf("Let's try to printf a simple sentence. %d \n", n);
    printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    printf("%i\n", 0x12);
    return (0);
}
