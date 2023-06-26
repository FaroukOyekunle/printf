#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @l: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_l = *l + 1;
	int sz = 0;

	if (format[curr_l] == 'l')
		sz = S_LONG;
	else if (format[curr_l] == 'h')
		sz = S_SHORT;

	if (sz == 0)
		*l = curr_l - 1;
	else
		*l = curr_l;

	return (size);
}
