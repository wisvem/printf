#include <unistd.h>
#include "holberton.h"

/**
* print_char - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
**/
int print_char(va_list c)
{
	char x = va_arg(c, int);

	write(1, &x, 1);
	return (1);
}

/**
* print_string - write the string s to stdout
* @s: the string to print
* Return: on succes number of bytes printed
**/
int print_string(va_list s)
{
	int count;
	char *str;

	str = va_arg(s, char*);
	for (count = 0; str[count]; count++)
	{
		write(1, &str[count], 1);
	}
	return (count);
}
