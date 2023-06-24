#include "main.h"

/**
* _printf - function that produces output according to a format.
*
* Description: function that produces output according to a format.
*
* @format: String format
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int format_position, number_of_characters_printed;
	va_list all_parameters;

	if (format == 0)
		return (-1);
	else if (format[0] == '%' && format[1] == '\0')
		return (-1);
	va_start(all_parameters, format);
	format_position = number_of_characters_printed = 0;
	while (format[format_position] != '\0')
	{
		if (format[format_position] == '%' && format[format_position + 1] != '\0')
			number_of_characters_printed += process_flag(format[format_position + 1],
					all_parameters);
		if (!is_flag(format[format_position], format[format_position + 1]))
		{
			number_of_characters_printed += _putchar(format[format_position]);
			format_position++;
		}
		else
			format_position += 2;
	}
	va_end(all_parameters);
	return (number_of_characters_printed);
}
