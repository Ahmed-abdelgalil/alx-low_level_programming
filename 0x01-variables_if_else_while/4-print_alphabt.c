#include <stdio.h>

/**
 * main - print alphabet in lower case except e & q
 *
 *
 * Return: zero
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == 'e' || ch = 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
