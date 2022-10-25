#include "main.h"

/**
 * swap_int - given 2 integers swapthere values
 * @a: parameter 1
 * @b: Parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
