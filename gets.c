#include "main.h"

/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @c: take a parameter.
 * Return: Flags:
 */

int get_flags(const char *format, int *c)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int l, curr_c;
	int flags = 0;
	const char FLAGS_CHAR[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARRAY[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_c = *c + 1; format[curr_c] != '\0'; curr_c++)
	{
		for (l = 0; FLAGS_CHAR[l] != '\0'; l++)
			if (format[curr_c] == FLAGS_CHAR[l])
			{
				flags |= FLAGS_ARRAY[l];
				break;
			}

		if (FLAGS_CHAR[l] == 0)
			break;
	}

	*c = curr_c - 1;

	return (flags);
}
