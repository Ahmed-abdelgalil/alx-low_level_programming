#include "main.h"

/**
 * main - prints _putchar followed by new line 
 *
 * Return: zero
 */
int main(void)
{
	char *ch = "_putchar";

	while(*ch)
	{
		_putchar(*ch);
		ch++;
	}
	return (0);
}
