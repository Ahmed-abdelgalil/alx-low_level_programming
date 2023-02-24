#include "main.h"
#include <ctype.h>

/**
* _isdigit - function to check is digit or not 
* @c: digit to chck 
* 
* Return: 1 if digit and 0 other 
*/
int _isdigit(int c)
{
    if (isdigit(c))
        return (1);
    else
        return (0);
}
