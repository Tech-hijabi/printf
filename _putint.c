#include "main.h"

/**
* _putint - prints integers
* @n: the integer to be printed
* Return: length
*/

int _putint(int n)
{
	char buffer[BUFF_SIZE];
	int length = 0;
	int i;
	unsigned int un;

	if (n == 0)
	{
	write(1, "0", 1);
	return (1);
	}
	else if (n < 0)
	{
	write(1, "-", 1);
	un = -n;
	}
	else
	{
	un = n;
	}

	while (un > 0)
	{
	buffer[length++] = un % 10 + '0';
	un /= 10;
	}

	for (i = length - 1; i >= 0; i--)
	{
	write(1, &buffer[i], 1);
	}

	return (length);
}
