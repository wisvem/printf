#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char c = 'F';
	char *s = "Wiston";

	printf("hello\n");
	_printf("hello");
	printf("____________\n");

	printf("%c\n", c);
	_printf("%c", c);
	printf("\n");

	printf("%s\n", s);
	_printf("%s", s);
	printf("\n");
	return (0);
}
