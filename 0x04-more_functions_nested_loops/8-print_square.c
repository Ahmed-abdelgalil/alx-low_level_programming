#include "main.h"

/**
* print_square - print square of #  
* @size: size of square 
*/
void print_square(int size)
{
    int i=0;
    int j=0;

    if (size == 0 || size < 0)
        _putchar('\n');
    else 
    {
        while(i < size)
        {
            while(j < size)
            {
                _putchar('#');
                j++;
            }
            _putchar('\n');    
            i++;
        }
        _putchar('\n');
    }
}
