#include "main.h"
#include <string.h>

/**
 * _strcat - This function appends the src string to the dest string,
 *  overwriting the terminating null byte (\0) at the end of dest, 
 * and then adds a terminating null byte
 * @dest: pointer to destination string 
 * @src: pointer to source string 
 * Retrun: *dest
 */
char *_strcat(char *dest, char *src)
{
    dest = strcat(dest, src);

    return dest;
}
