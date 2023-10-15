#ifndef _PRINTF_H
#define _PRINF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(char *str);

#endif
