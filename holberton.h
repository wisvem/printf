#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>

/**
* struct print_st - print structure
* @format: format or type
* @f: right function to use
**/
typedef struct print_st
{
	char *format;
	int (*f)();
} print_t;
int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);
int print_int(va_list x);
int _strlen(char *);
int _putchar(char c);
int (*get_print_func(const char *format, va_list args, );
#endif /* _HOLBERTON_H_ */
