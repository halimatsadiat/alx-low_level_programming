#include "main.h"

/** reverse_array - Reverse the content of an array
 * @a: array of integers
 * @n: number of element in an array
 */
void reverse_array(int *a, int n)
{
	int s, i;

	for (i = n - 1; i >= n; i--)
	{
		s = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = s;
	}
}
