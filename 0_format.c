#include "main.h"

/**
 * _printf - Custom printf function that handles the 'c', 's', and '%' conversion specifiers
 * @format: Character string
 *
 * Return: number of characters printed excluding the null bytes used to end the output to string
 */
 
int _printf(const char *format, ...)
{
    va_list args; /* holds variable arguments */
    int output, length, i; /*variables to count the characters printed, store string length and loop through string respectivelt */
    const char *string; /* pointer to the string */
    
    va_start(args, format);
    output = 0;
    length = 0;

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
            if (*format == '\0') /* if it is a null character, break */
                break;
            if (*format == 'c') /* if it is a single character i.e. 'c' print to stdout and increment count */
            {
                char c = va_arg(args, int);
                _putchar(c);
                output++;
            }
            else if (*format == 's') /* if it is a string i.e. 's', calculate the string length and print the string to stdout via looping and increment count */
            {
                string = va_arg(args, const char *);
                length = strlen(string);
                for (i = 0; i < length; i++)
                {
                    _putchar(string[i]);
                    output++;
                }
            }
            else if (*format == '%') /* if it is ampersand i.e. '%' print a literal ampersand to stdout and increment count */
            {
                _putchar('%');
                output++;
            }
            else /* if the specifier is unknown print ampersand and the unknown specifier */
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
    return output; /* return the total number */ 
}
