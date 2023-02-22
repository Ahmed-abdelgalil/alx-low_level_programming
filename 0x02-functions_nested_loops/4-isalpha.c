#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check for alphabets in lower case or upper
 * @c: letter to test
 *
 * Return: 1 if is lower zero otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else 
		return (0);
}
