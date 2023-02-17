#include <stdio.h>

/**
 * main - print combination of two numbers without repetation
 *
 *
 * Return: zero
 */
int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '8' ; i++)
	{
		for (j = i + 1 ; j <= '9' ; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8')
                        	break;
			putchar(',');
			putchar(' ');
		}
	}
		
	putchar('\n');
	return (0);
}
