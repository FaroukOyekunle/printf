#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *string);
int _puts_digit(int num);
int process_flag(char specifier, va_list all_parameters);
int is_flag(char percent, char specifier);

#endif
