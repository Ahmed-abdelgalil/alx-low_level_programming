#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of number 
 * @n: integer to test
 *
 * Return: absolute value of int 
 */
int print_last_digit(int n)
{
	int a;

	a = abs(n) % 10;
	_putchar(a);
	return (a);
}
