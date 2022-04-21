#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_b(unsigned int n, char *buff);
int print_u(unsigned int n, char *buff);
int print_d(long int n, char *buff);
int print_x(unsigned int n, short flag, char *buff);
int print_o(unsigned int n, char *buff);
int print_s(char *a, char *buff);
int print_S(char *a, char *buff);

#endif /* ifndef PRINT_H */
