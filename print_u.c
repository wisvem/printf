#include "holberton.h"

/**
* print_u - print unsigned integers
* @x: integer to print
* Return: number of byte printed
**/
int print_u(va_list x)
{
	unsigned int n = va_arg(x, int), i = 1, divi = 1, j;
	unsigned int m = n;
	unsigned int bck = n;

	if (n < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	if (n >= 1 && n <= 9)
		_putchar('0' + n);
	else
	{
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
			divi = divi * 10;
		for (j = 1; j <= i; j++)
		{
			m = bck / divi;
			bck = bck - (m * divi);
			divi = divi / 10;
			_putchar('0' + m);
		}
	}
	return (i);
}
