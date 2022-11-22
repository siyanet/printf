#include "main.h"

/**
  *_putstr -prints string
  *@arg_list: argument list 
  */
void _putstr(va_list arg_list)
{
	int i;
	char *str = va_arg(arg_list, char*);

	if(str == NULL)
		str = "null";
	else if (*str == '\0')
		return -1;
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		printed_chars++;
	} 
