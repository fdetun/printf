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
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char *write_per(char *dest, va_list arg);
char *write_char(char *src, va_list arg);
char *write_str(char *src, va_list arg);

int _printf(const char *format, ...);
typedef struct Printer
{
	char op;
	char *(*p)(char *str, va_list arg);
} Printer;

#endif /* _PRINTF_ */
