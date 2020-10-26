#include "holberton.h"

/**
* _printf - print something
* @format: list of directives
* Return: the number of characters printed
**/
int _printf(const char *format, ...)
{
	va_list elements;
	int (*f)(va_list);
	int count = 0, i;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(elements, format);
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			f = get_print(format[i]);
			if (f == NULL)
			{
				write(1, &format[i], 1);
				count++;
			}
			else
			{
				count = count + f(elements);
			}

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
