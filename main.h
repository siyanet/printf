#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
int printed_char = 0;
int _putchar(char c);
int _putstr(va_list arg_list);
int _printf(char *format, ...);

#endif
