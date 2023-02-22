#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from to 98
 * @n: int to strat from
 *
 */
void print_to_98(int n)
{
	int i;
 	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i == 98)
                	{
                        	printf("98");
                        	break;
                	}
                	printf("%d, ", i);
		}
	}
	else
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
			{
				printf("98");
				break;
			}
			printf("%d, ", i);
		
		}
	}
}
