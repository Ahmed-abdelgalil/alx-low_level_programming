#include "main.h"

/**
* print_diagonal - print digonal with '\' 
* @n: integer to draw \
*/
void print_diagonal(int n)
{
    int i=0;

    if (n == 0 || n < 0)
        _putchar('\n');
    else 
    {
        while(i <= n)
        {
            _putchar('\\');
            _putchar('\n');
            i++;
        }
    }
}
