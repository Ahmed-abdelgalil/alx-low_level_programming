#include "main.h"
#include <ctype.h>

/**
 * main - check if  alphabets in lower case 
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
