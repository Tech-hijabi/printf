#include <unistd.h>
#include "main.h"

/**
* * _putchar - writes the character c to stdout
* * @c: The character to print
* * Return: On success 1.
* * On error, -1 is returned, and errno is set appropriately.
*/

	int _putchar(char c)
	{
	static char buffer[BUFF_SIZE];
	static int index = 0;

	if (index >= BUFF_SIZE)
	{
	write(1, buffer, index);
	index = 0;
	}

	buffer[index++] = c;

	write(1, buffer, index);
	index = 0;

	return (1);
	}	
