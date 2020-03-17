#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "holberton.h"
/**
 * _printf - _printf
 * @format: format
 * Return: char
*/

int _printf(const char *format, ...)
{
va_list f1;
int i = 0, j = 0;
char *stock;
char *ch;
stock = malloc(1024);
va_start(f1, format);
if (!stock)
return (-1);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
{
stock[j] = (char)va_arg(f1, int);
j++;
break;
}
case 's':
{
ch = va_arg(f1, char*);
strcpy(&stock[j], ch);
j += strlen(ch);
break;
}
}
}
else
{
stock[j] = format[i];
j++;
}
i++;
}
va_end(f1);
fwrite(stock, j, 1, stdout);
free(stock);
return (j);
}
