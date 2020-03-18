#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"


/**
 * fde - fde
 * @f1: f1
 * Return: Always 0
 */
void fde(va_list f1)
{
char c = (char)va_arg(f1, int);
_putchar(c);
}

/**
 * s - s
 * @f1: f1
 * Return: Always 0
 */
void s(va_list f1)
{
int j = 0;
char *ch;
ch = malloc(1024);
ch = va_arg(f1, char*);
if (!ch)
{
ch = "(null)";
}
for (j = 0; ch[j]; j++)
{
_putchar(ch[j]);
}
}

/**
 * _printf - _printf
 * @format: format
 * Return: char
*/
int _printf(const char *format, ...)
{
va_list f1;
int i = 0;
va_start(f1, format);

while (format && format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
fde(f1);
break;
case '%':
_putchar('%');
break;
case '\0':
break;
case 's':
s(f1);
break;
default:
{
_putchar('%');
_putchar(format[i]);
break;
}
}
}
else
{
_putchar(format[i]);
}
i++;
}
va_end(f1);
return (i);
}
