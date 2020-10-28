#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
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
int print_perc(void);
int print_bin(va_list x);
int print_u(va_list x);
int print_oct(va_list n);
int print_hex(va_list n);
int print_HEX(va_list n);
int rot13(va_list x);
int print_rev(va_list x);
int print_S(va_list x);
int print_p(va_list x);
int print_x(unsigned long int x);
int print_X(unsigned long int x);
int (*get_print(char type))(va_list);
#endif /* _HOLBERTON_H_ */
