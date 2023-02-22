#include "main.h"
/**
 * times_table - print 9 times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		for (j = 1 ; j <= 9 ;j++)
		{
			int n = i * j;

			_putchar(',');
			_putchar(' ');
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}