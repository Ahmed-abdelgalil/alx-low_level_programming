#include "main.h"

/**
* print_line - print line with numbers _  
* @n: integer to draw _
*/
void print_line(int n)
{
    int i=0;

    if (n == 0 || n < 0)
        _putchar('\n');
    else 
    {
        while(i < n)
        {
            _putchar('_');
            i++;
        }
        _putchar('\n');
    }
}
