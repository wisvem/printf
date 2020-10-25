#include "holberton.h"

/**
* _printf - print something
* @format: list of directives
* Return: the number of characters printed
**/
int _printf(const char *format, ...)
{
	va_list elements;
	int count = 0;
	print_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = get_print_function(format, prints, args);
	va_end(args);
	return (count);
}
