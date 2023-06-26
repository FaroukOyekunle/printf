#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @j: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precsn.
 */
int get_precision(const char *format, int *j, va_list list)
{
	int curr_j = *j + 1;
	int precsn = -1;

	if (format[curr_j] != '.')
		return (precsn);

	precsn = 0;

	for (curr_j += 1; format[curr_j] != '\0'; curr_j++)
	{
		if (is_digit(format[curr_j]))
		{
			precsn *= 10;
			precsn += format[curr_j] - '0';
		}
		else if (format[curr_j] == '*')
		{
			curr_j++;
			precsn = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*j = curr_j - 1;

	return (precsn);
}
