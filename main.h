#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>




int _putchar(char c);
int _printf(const char *format, ...);
int print_character (va_list args, int output);
int print_string (va_list args, int output);
int print_ampersand (int output);


#endif 
