#include "main.h"
#include <string.h>

/**
 * _strncat - same as _strcat but it concatenate at most n bytes 
 * @dest: pointer to destination string 
 * @src: pointer to source string 
 * @n: bytes 
 * Retrun: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
    dest = strncat(dest, src,n);

    return dest;
}
