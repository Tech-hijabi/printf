#include <unistd.h>
#include "main.h"

/**
* * print_custom_string - prints custom characters
* * @c: The character to print
* * Return: count.
* * 
*/
	
int print_custom_string(char *str)
{
	int count = 0;
	while (*str)
	{
	if ((*str > 0 && *str < 32) || *str >= 127)
	{
	count += _putchar('\\');
	count += _putchar('x');
	count += _putchar("0123456789ABCDEF"[(*str >> 4) & 0xF]);
	count += _putchar("0123456789ABCDEF"[*str & 0xF]);
	}
	else
	{
	count += _putchar(*str);
	}
	str++;
	}
	return count;
}
