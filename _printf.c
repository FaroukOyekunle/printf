#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; // Move past the '%'

            // Handle the conversion specifier
            switch (*format)
            {
                case 'c':
                    // Fetch the next argument of type 'int'
                    // and print it as a character
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    // Fetch the next argument of type 'char *'
                    // and print it as a string
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    // Print a literal '%'
                    putchar('%');
                    count++;
                    break;
                default:
                    // Invalid conversion specifier, ignore
                    break;
            }
        }
        else
        {
            // Regular character, just print it
            putchar(*format);
            count++;
        }

        format++; // Move to the next character in the format string
    }

    va_end(args);

    return count;
}

int main(void)
{
    _printf("Hello, %s! The answer is %d%c\n", "Alice", 42, '%');

    return 0;
}
