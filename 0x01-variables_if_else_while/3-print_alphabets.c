#include <stdio.h>

/*
 * main - print alphabets in lower and upper case
 *
 *
 * Return - zero
 */
int main(void)
{
	for(char ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for(char ch = 'A' ; ch <= 'Z' ; ch++)
                putchar(ch);
	putchar('\n');
	return (0);
}
