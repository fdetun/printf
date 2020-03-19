#include "holberton.h"
/**
 *_printf - A function that produces output according to a format.
 *
 *@format: A string that specifies the output behavior.
 *
 * Return: The output length.
 */
int _printf(const char *format, ...)
{
	Printer Occ[] = {
		{'c', write_char},
		{'s', write_str},
		{'%', write_per},
		{0, NULL}
	};
	char *stock = malloc(1024 * sizeof(char)), ch, N;
	va_list arg;
	unsigned int  i = 0, j = 0, len;

	va_start(arg, format);
	stock[0] = '\0';
	while (format[i] && format)
	{
		N = format[i + 1];
		if (!(format[i] == '%' && (N == 'c' || N == 's' || N == '%')))
		{
			ch = format[i];
			stock = _strncat(stock, &ch, 1);
		} else
		{
			j = 0;
			while (Occ[j].op)
			{
				if (Occ[j].op == format[i + 1])
				{
					Occ[j].p(stock, arg);
					i++;
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(arg);
	len = _strlen(stock);
	_puts(stock);
	free(stock);
	return (len);
}
