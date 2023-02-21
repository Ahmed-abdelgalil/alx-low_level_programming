#include "main.h"
#include <ctype.h>

/**
 * _islower - check if  alphabets in lower case 
 * @c: letter to test
 *
 * Return: 1 if is lower zero otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else 
		return (0);
}
