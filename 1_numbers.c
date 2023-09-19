#include "main.h"

/**
 * print_integer - Prints an integer
 * @n: Integer to be printed
 *
 * Return: Number of characters printed.
 */
int print_integer(int n)
{
int char_count; 
int alt; /* variable to stores alternate positive value of any negative value sent to int n */
int divisor;
	
char_count= 0;
alt = n;
divisor = 1;

if (alt < 0)
{
_putchar('-');
alt = -alt;
char_count++;
}
	
while (alt / divisor > 9)
	divisor *= 10;

while (divisor != 0)
{
	_putchar('0' + alt / divisor);
	alt %= divisor;
	divisor /= 10;
	char_count++;
}
return (char_count);
}
