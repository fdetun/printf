#include "holberton.h"

char *write_str(char *src, va_list arg)
{
	char *str_ = va_arg(arg, char *);
	int Len = strlen(str_) + strlen(src) + 1, i = 0;
	char *Pt = NULL;

	if (Len > 10)
	{
		Pt = _strdup(src);
		free(src);
		src = malloc((Len + 1024) * sizeof(char));
		for (i = 0 ; i <= _strlen(Pt); i++)
			src[i] = Pt[i];
		src = _strncat(src, str_, _strlen(str_));
		return (src);
	}
	if (str_)
		src = _strncat(src, str_, _strlen(str_));
	else
		src = _strncat(src, "(null)", 7);
	return (src);
}
char *write_char(char *src, va_list arg)
{
	char  c = va_arg(arg, int);

	if (c)
		src = _strncat(src, &c, 1);
	return (src);
}
char * write_per(char *src, va_list arg)
{
	char c = '%';

	(void)arg;
	src = _strncat(src, &c, 1);
	return (src);
}

