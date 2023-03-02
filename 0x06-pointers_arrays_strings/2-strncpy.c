#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string  
 * @dest: pointer to destination string 
 * @src: pointer to source string 
 * @n: at most nbytes 
 * Retrun: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    dest = strncpy(dest, src,n);

    return dest;
}
