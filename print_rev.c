#include "holberton.h"

/**
* print_rev - print a reverse a string
* @x: string
* Return: bytes printed
**/
int print_rev(va_list x)
{
	char *s;
	int i = 0, count;

	s = va_arg(x, char*);
	while (s[i] != '\0')
	{
		i++;
	}
	count = i;
	while (i - 1 >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	return (count);
}
