#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct print_st - print structure
* @type: format or type
* @function: right function to use
**/
typedef struct print_st
{
	char type;
	int (*function)();
} print_t;
int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);
int print_int(va_list x);
int _strlen(char *);
int _putchar(char c);
int print_perc(va_list x);
#endif /* _HOLBERTON_H_ */
