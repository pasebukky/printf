#include "main.h"

/**
 * print_character - Print the conversion specifier 'c'
 * @args: Contains the character to be printed
 * @output: Counts characters in real-time
 *
 * Return: The number of characters printed
 */

int print_character(va_list args, int output)
{
char c; /* variable to store characters */

c = va_arg(args, int);
_putchar(c);
return (output + 1);
}

/**
 * print_string - Print the conversion specifier 's'
 * @args: Contains the string to be printed
 * @output: Counts characters in real-time
 *
 * Return: The number of characters printed
 */

int print_string(va_list args, int output)
{
const char *string; /* pointer to the string */
int length; /*variables to store string length */
int i; /* variable used for looping */

string = va_arg(args, const char *);
length = strlen(string); /* calculate the length of the string */

for (i = 0; i < length; i++) /* loop printing one character at a time */
{
	_putchar(string[i]);
	output++;
}
return (output);
}

/**
 * print_ampersand - Print the conversion specifier '%'
 * @output: Contains the string to be printed
 *
 * Return: The number of characters printed
 */

int print_ampersand(int output)
{
putchar('%');
return (output + 1);
}

/**
 * _printf - Custom printf function that handles the 'c', 's', and '%'
 * conversion specifiers
 * @format: Character string
 *
 * Return: number of characters printed excluding the null bytes used to
 * end the output to string
 */

int _printf(const char *format, ...)
{
va_list args; /* holds variable arguments */
int output; /*variables to count the characters printed */

va_start(args, format);
output = 0;

while (*format)
{
	if (*format != '%') /* check if the character is not ampersand */
	{
		_putchar(*format);
		output++; /* print the character in increments*/
	}
	else
	{
		format++; /* Increment and move to the character after ampersand */
		if (*format == '\0')  /* if it is a null character, break */
			break;
		if (*format == 'c') /* if 'c' print the output of the function */
		{
			output = print_character(args, output);
		}
		else if (*format == 's') /* if 's' print the output of the function */
		{
			output = print_string(args, output);
		}
		else if (*format == '%') /* if '%' print the output of the function */
		{
			output = print_ampersand(output);
		}
		else /* if unknowen print '%' and the unknown specifier */
		{
			_putchar('%');
			output++;
			_putchar(*format);
			output++;
		}
	}
	format++;
}
va_end(args);
return (output); /* return the total number of characters */
}
