#include "main.h"
/**
 * reverse_array - reverse array 
 * @a: array  
 * @n: numberc of elements
 *  
 * Retrun: none  
 */
void reverse_array(int *a, int n)
{
    int *a2, i, j;

    for(i = 0, j =(n-1); i < j ; i++, j--)
    {
        a2[i] = a[j];
    }
}
