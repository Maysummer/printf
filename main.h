#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_b(unsigned int n);
int print_u(unsigned int n);
int print_d(int n);
int print_x(unsigned int n, short flag);
int print_o(unsigned int n);
int print_s(char *a);

#endif /* ifndef PRINT_H */
