#include "main.h"

/**
  *_putchar -prints char to stdout
  *@c: character to be printed
  *Return: 0 on sucess -1 on error
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
