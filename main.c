#include "holberton.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;



    char *big_str = create_array(101,'c');
    big_str[0] = 'c' ;
    big_str[100] = '\0';
    // printf("---------->%ld\n",strlen(big_str));
    
    // len2 =_printf("%s\n",big_str);
    len = _printf("Let's print a simple sentence.\n");
    printf("------->%d\n",len );
    free(big_str);

	// len2 = printf("%s\n",big_str);
    // printf("[%d,%i]\n",len,len2 );
    // _printf(">%!\n");
    // printf("*%!\n");
    // len = _printf("Let's try to printf a simple sentence.\n");
    // len2 = printf("Let's try to printf a simple sentence.\n");
    // ui = (unsigned int)INT_MAX + 1024;
    // addr = (void *)0x7ffe637541f0;

    // _printf("Length:[%d, %i]\n", len, len);
    // printf("Length:[%d, %i]\n", len2, len2);
    // _printf("Negative:[%d]\n", -762534);
    // printf("Negative:[%d]\n", -762534);
    // _printf("Unsigned:[%u]\n", ui);
    // printf("Unsigned:[%u]\n", ui);
    // _printf("Unsigned octal:[%o]\n", ui);
    // printf("Unsigned octal:[%o]\n", ui);
    // _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    // _printf("->Character:[%c]\n", 'H');
    // printf("->Character:[%c]\n", 'H');
    // _printf("->String:[%s]\n", "I am a string !");
    // printf("->String:[%s]\n", "I am a string !");
    // _printf("->Address:[%p]\n", addr);
    // printf("->Address:[%p]\n", addr);
    // len = _printf("->Percent:[%%]\n");
    // len2 = printf("->Percent:[%%]\n");
    // _printf("Len:[%d]\n", len);
    // printf("Len:[%d]\n", len2);
    // _printf("->Unknown:[%r]\n");
    // printf("->Unknown:[%r]\n");
    return (0);
}