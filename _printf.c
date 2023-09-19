#include "main.h"

/**
 * _printf - Alternate printf function with specifiers
 * @format: Format string.
 *
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
va_list args;
int char_count;
	
va_start(args, format);
char_count = 0;

while (*format)
{
	if (*format == '%')
	{
		format++; 
		if (*format == 'c')
			char_count += print_character(va_arg(args, int));
		else if (*format == 's')
			char_count += print_string(va_arg(args, const char *));
		else if (*format == '%')
			char_count += print_percent();
		else if (*format == 'd' || *format == 'i')
			char_count += print_integer(va_arg(args, int));
		else
		{
			putchar('%'); 
			char_count++;
			putchar(*format);
			char_count++;
		}
	}
	else
	{
		putchar(*format);
		char_count++;
	}
	format++;
}
va_end(args);
return (char_count);
}
