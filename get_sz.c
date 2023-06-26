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
	int curr_i = *i + 1;
	int sz = 0;

	if (format[curr_i] == 'i')
		sz = S_LONG;
	else if (format[curr_i] == 'h')
		sz = S_SHORT;

	if (sz == 0)
		*i = curr_i - 1;
	else
		*i = curr_i;

	return (sz);
}
