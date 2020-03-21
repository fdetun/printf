#include "holberton.h"

/** _strlen - function that that returns the length of a string.
* @s : pointer to a string.
* Return: string lenght
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
*_puts -  function that prints a string, //followed by a new line, to stdout.
**@str : int
* Return : Void.
*/
void _puts(char *str)
{
	int i = -1;

	while (str[++i] != '\0')
		_putchar(str[i]);
}
/**
*_strncat - A function that concatenates two strings.
*
*@dest: Pointer to the array.
*@src: Pointer to the array.
*@n: number of bytes to copy.
*Return: Pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 *@size : size of the array.
 *@c: character to fill with.
 * Return: a pointer to the array.
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(c));
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *@str : array.
 * Return: pointer to a new string , NULL if str = NULL , on success eturns a
 * pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *p;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < len  ; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
