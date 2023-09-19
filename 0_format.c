#include "main.h"

/**
 * print_character - Prints a character 
 * @c: Character to be prined
 *
 * Return: Always 1 (the number of characters printed)
 */

int print_character(char c)
{
_putchar(c);
return (1);
}

/**
 * print_string - Prints a string
 * @string: String to be printed
 *
 * Return: Length of the string i.e.the number of
 * characters printed excluding the null byte
 */

int print_string(const char *string)
{
int length;
int i;

length = strlen(string);

for (i = 0; i < length; i++)
{
	_putchar(string[i]);
}
return (length);
}

/**
 * print_percent - Prints a literal % sign
 *
 * Return: Always 1 (the number of characters printed)
 */

int print_percent()
{
_putchar('%');
return (1);
}
