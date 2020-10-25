#include "holberton.h"

/**
* _printf - print something
* @format: list of directives
* Return: the number of characters printed
**/
int _printf(const char *format, ...)
{
	va_list elements;
	int count = 0, i, j;
	print_t op[] = {
		{'c', print_char},
		{'s', print_string},
		{'\0', NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(elements, format);
	for (i = 0; format[i] != '\0' ; i++)
	{
		j = 0;
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			for (j = 0; op[j].type != '\0'; j++)
			{
				if (format[i] == op[j].type)
				{
					count = count + op[j].function(elements);
					break;
				}
			}
			if (op[j].type == '\0')
				return (-1);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			print_perc();
			count++;
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		};
	}
	va_end(elements);
	return (count);
}
