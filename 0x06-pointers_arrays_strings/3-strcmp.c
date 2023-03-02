#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings  
 * @s1: first string 
 * @s2: second string 
 *  
 * Retrun: an integer 
 */
int _strcmp(char *s1, char *s2)
{
    int cmp;
    cmp = strcmp(s1, s2);

    return cmp;
}
