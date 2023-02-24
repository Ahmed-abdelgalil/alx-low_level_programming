#include "main.h"
#include <ctype.h>

/**
* _isupper - function to check the char is upper or not 
* @c: chrachter to chck 
* 
* Return: 1 if upper and 0 if not 
*/
int _isupper(int c)
{
    if (isupper(c))
        return (1);
    else
        return (0);
}
