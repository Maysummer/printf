#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stddef.h>

/** main - main
 * Return: 0;
 */

int main(void)
{
	int len;
	int len2;
	char a = 'q';
	char*p = NULL;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("\n");
	printf("\n");
	_printf("%s\n", p);
	_printf("abc%c\n", a);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%d]\n", -762534);
	return (0);
}
