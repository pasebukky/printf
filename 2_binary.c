#include "main.h"

/**
 * print_binary - Converts unsigned int to binary then prints
 * @n: Integer to be printed as a binary
 *
 * Return: Number of characters printed.
 */

int print_binary(int n) 
{
int char_count;
int byte [8];
int a;
int b;
  
a = 0;
char_count = 0;

if (n == 0) 
{
	_putchar('0');
	char_count++;
} 
else 
{
 	while (n > 0) 
	{
		byte [a] = n % 2;
		n /= 2;
		a++;
	}

	for (b = a - 1; b >= 0; b--) 
	{
		_putchar('0' + byte [b]);
		char_count++;
	}
}
return (char_count);
}
