#ifndef _PRINTF_
#define _PRINTF_
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _putchar(char c);
void _puts(char *str);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
void write_per(char *dest,va_list arg);
void write_char(char *src, va_list arg);
void write_str(char *src, va_list arg);

int _printf(const char *format, ...);
typedef struct Printer
{
	char op;
	void (*p)(char *str,va_list arg);
} Printer;
#endif /* _PRINTF_ */
