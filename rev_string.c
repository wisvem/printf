#include "holberton.h"

/**
* rev_string - reverse a string
* @x: string
* Return: bytes printed
**/
int rev_string(va_list x)
{
	char *s;
	int i = 0;
	int j = 0;
	char tmp;
	int pos;

	s = va_arg(x, char*);
	while (s[i] != '\0')
	{
		i++;
	}
	pos = i - 1;
	for (pos = i - 1; pos >= i / 2; pos--)
	{
		tmp = s[pos];
		s[pos] = s[j];
		s[j] = tmp;
		j++;
	}
	for (j = 0; j < i + 1; j++)
	{
		_putchar(s[j]);
	}
	return (i);
}
