#include "main.h"

/**
* more_numbers - print from 0 -14 , 10 times 
*
*/
void more_numbers(void)
{
    int i;
    int j=0;

    while (j < 10)
    {
        for (i = 0 ; i <= 14 ; i++)
        {
            _putchar(i + '0');
        }
        _putchar('\n');
        
        j++;
    }
}
