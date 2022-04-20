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
	unsigned int ui;
	void *addr;
	
	/*for c, s and %*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("\n");
	printf("\n");
	_printf("%s\n", p);
	_printf("abc%c\n", a);
	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');
    	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");

	/* for d and i*/
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%d]\n", -762534);
	_printf("i %i\n", -INT_MAX);
        _printf("d %d\n", -INT_MAX);
        _printf("%d\n", 0);
	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);

	/* for b*/
	_printf("%b\n", 98);
	_printf("%b\n", 0);

	/* for u, o, x and X */
    	_printf("%o\n", 98);
    	_printf("%x\n", 56741);
    	_printf("%X\n", -56741);
    	_printf("%u\n", 0);
	_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);
    	_printf("Unsigned octal:[%o]\n", ui);
    	printf("Unsigned octal:[%o]\n", ui);
    	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

	/* for p*/
	_printf("Address:[%p]\n", addr);
    	printf("Address:[%p]\n", addr);

	/* for r*/
	_printf("Unknown:[%r]\n");
    	printf("Unknown:[%r]\n");

	ui = (unsigned int)INT_MAX + 1024;
    	addr = (void *)0x7ffe637541f0;
	return (0);
}
