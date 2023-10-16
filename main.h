#ifndef _PRINTF_H
#define _PRINF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(char *str);
int nbr_digits(int n);
void print_nbr(int nbr);
int handle_output(char format, va_list args);


int handle_other(char format);

#endif
