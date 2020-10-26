#include "holberton.h"

/**
* get_print - get the correct function
* @tipo: format specifier
* Return: pointer to the correct function
**/
int (*get_print(char tipo))(va_list)
{
	int i;
	print_t op[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};

	for (i = 0; op[i].type; i++)
	{
		if (tipo == op[i].type)
		{
			return (op[i].function);
		}
	}
	return (NULL);
}

