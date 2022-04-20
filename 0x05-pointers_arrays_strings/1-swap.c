#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
