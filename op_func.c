#include "holberton.h"

void write_str(char *src, va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str)
		src = _strncat(src, str, _strlen(str));
	else
		src = _strncat(src, "(nil)", 5);
}
void write_char(char *src, va_list arg)
{
	char  c = va_arg(arg, int);

	if (c)
		src = _strncat(src, &c, 1);
}
void write_per(char *src, va_list arg)
{
	char c = '%';

	(void)arg;
	src = _strncat(src, &c, 1);
}
