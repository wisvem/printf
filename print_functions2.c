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

/**
* print_oct - print number to octal
* @n: number to print
* Return: number of bytes printed
**/
int print_oct(va_list n)
{
	unsigned int x = va_arg(n, int);
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 8;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 8;
		x = x / 8;
		ptr[i] = res;
		count++;
	}
	for (; i > 0; i--)
	{
		_putchar('0' + ptr[i - 1]);
	}
	free(ptr);
	return (count);
}

/**
* print_hex - print number to hexa lower
* @n: number to print
* Return: number of bytes printed
**/
int print_hex(va_list n)
{
	unsigned int x = va_arg(n, int);
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 16;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 16;
		x = x / 16;
		if (res > 9 && res < 16)
			ptr[i] = 39 + res;
		else
			ptr[i] = res;
		count++;
	}
	for (; i > 0; i--)
	{
		_putchar('0' + ptr[i - 1]);
	}
	free(ptr);
	return (count);
}

/**
* print_HEX - print number to hexa upper
* @n: number to print
* Return: number of bytes printed
**/
int print_HEX(va_list n)
{
	unsigned int x = va_arg(n, int);
	int res, i, j, count = 0;
	char *ptr;
	unsigned int  y = x;

	if (x < 1)
	{
		_putchar('0' + 0);
		return (1);
	}
	for (j = 0; y > 0; j++)
		y = y / 16;
	ptr = malloc(sizeof(char) * j);
	if (ptr == NULL)
		return (-1);
	for (i = 0; x > 0; i++)
	{
		res = x % 16;
		x = x / 16;
		if (res > 9 && res < 16)
			ptr[i] = 7 + res;
		else
			ptr[i] = res;
		count++;
	}
	for (; i > 0; i--)
	{
		_putchar('0' + ptr[i - 1]);
	}
	free(ptr);
	return (count);
}

/**
* print_S - print non printable characters
* @s: string
* Return: bytes printed
**/
int print_S(va_list s)
{
	unsigned int i, count = 0, aux;
	char *str;

	str = va_arg(s, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			aux = str[i];
			_putchar('\\');
			_putchar('x');
			if (aux > 0 && aux < 16)
			{
				_putchar('0');
				count++;
			}
			print_X(aux);
			count = count + 3;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
