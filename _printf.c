#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
  *_printf - prints to stdout
  *@format: a character string
  *Return: printed chars;
  */
int _printf(const char *format, ...)
{
	int i;

	va_list arg_list;

	va_start(arg_list, format);

	for (i = 0; format[i] != '\0', i++)
	{
		if(format[i] == '\')
		{
			if(format[i + 1] == 'c')
				_putchar(va_arg(arg_list, char *));
			else if(format[i + 1] == 's')
				_putstr(va_arg(arg_list, char *));
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	va_end(arg_list);
	return (printed_chars);
}
