/*
 * print_x
 * print_p
 * print_X
 */

#include "holberton.h"

/**
* print_p - print pointer address
* @x: pointer
* Return: number of bytes printed
**/
int print_p(va_list x)
{
	unsigned long n;
	int count = 0;

	n = va_arg(x, unsigned long int);

	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	_putchar('0');
	_putchar('x');
	count = count + print_x(n) + 2;
	return (count);
}

/**
* print_x - print number to hexa lower
* @x: number to print
* Return: number of bytes printed
**/
int print_x(unsigned long int x)
{
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
* print_X - print number to hexa upper
* @x: number to print
* Return: number of bytes printed
**/
int print_X(unsigned long int x)
{
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
