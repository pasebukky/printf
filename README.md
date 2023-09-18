Project Title: Printf

Project Description: This file contains the codes used in creating a custorm printf function.

This custom printf function handles the following conversion specifiers: 
--- c: character
--- s: string
--- %: ampersand
--- d: decimal (base 10) number
--- i: integer in base 10
--- b: unsigned int argument is converted to binary
--- u: unsigned decimal (base 10) number
--- o: number in octal (base 8)
--- x: hexadecimal (base 16) in lowercase
--- X: hexadecimal (base 16) in uppercase

In addition to these custom conversion specifiers, these were also additional features of the custom printf function
--- It uses a local buffer of 1024 chars in order to call _write_ as little as possible.
--- It handles the following custom conversion specifier:
    --- S : prints the string.
    --- Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
--- It handle the following flag characters for non-custom conversion specifiers:
    --- +
    --- space
    --- #
--- It handles  the following length modifiers for non-custom conversion specifiers:
    --- l
    --- h
    --- Conversion specifiers to handle: d, i, u, o, x, X
--- It handles the field width for non-custom conversion specifiers.
--- It handles the precision for non-custom conversion specifiers.
--- It handles the 0 flag character for non-custom conversion specifiers.
--- It handles the - flag character for non-custom conversion specifiers.
--- It handles the following custom conversion specifier:
    --- r : prints the reversed string
    --- R: prints the rot13'ed string
--- All the above options work well together.
