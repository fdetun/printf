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

	for (length = 0; dest[length] != '\0'; length++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
