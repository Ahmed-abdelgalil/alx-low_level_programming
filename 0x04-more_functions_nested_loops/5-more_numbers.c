#include "main.h"
/**
* more_numbers - print from 0 -14 , 10 times 
*
*/
void more_numbers(void)
{
    int i,j;

    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j <= 14)
	{
		if (j > 9)
		{
			_putchar(48 +(j / 10));
		}
		_putchar(48 + (j % 10));
		j++;
	}
        _putchar('\n');
        
        i++;
    }
}
