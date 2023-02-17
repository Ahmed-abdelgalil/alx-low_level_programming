#include <stdio.h>

/**
 * main - print alphabet in lower case but use putchar
 *
 *
 * Return: zero
 */
int main(void)
{
	int i;
	/* *
	 * to use putchar() args must be char type 
	 * so we put single quote around nums
	 */
	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
