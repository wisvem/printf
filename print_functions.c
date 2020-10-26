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
	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		write(1, &str[count], 1);
	}
	return (count);
}

/**
* print_perc - print percentage
* Return: 1
**/
int print_perc(void)
{
	write(1, "%", 1);
	return (1);
}

/**
* print_int - print integers
* @n: integer to print
**/
int print_int(va_list x)
{
	int n = va_arg(x, int);
	unsigned int m = n;
	unsigned int bck = n;
	int i = 1, j, divi = 1;

	if (n >= 0 && n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n < 0 && n >= -9)
	{
		n = -n;
		_putchar('-');
		_putchar('0' + n);
	}
	else
	{
		if (n <= -10)
		{
			n = -n;
			_putchar('-');
			bck = n;
			m = n;
		}
		while (m >= 10)
		{
			m = m / 10;
			i++;
		}
		for (j = i; j > 1; j--)
		{
			divi = divi * 10;
		}
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

