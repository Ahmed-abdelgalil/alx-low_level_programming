#include "main.h"

/**
 * main - print alphabets in lower case 
 *
 * Return: Zero 
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
