#include "main.h"

/**
 * print_sign - check sign of number and print it 
 * @n: number to check it's sign
 *
 * Return: 1 if is lower zero otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
