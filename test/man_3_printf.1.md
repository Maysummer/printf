% _PRINTF(1) _print 1.0.0
% Nmesoma Udojike, Miracle E Chukwuma
% April 2022
# NAME
_printf - format and print out given inputs

# SYPNONSIS
**\_printf** *FORMAT* [ARGUMENT]... \
**\_printf** *OPTION*

# DESCRIPTION
Print out ARGUMENTS(s) accordint to pre-defined FORMAT

## Format of the format string
The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary characters (not %), which	are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion specification is introduced by the character %, and ends with a conversion specifier. In between there may be (in this order) zero or more flags, an optional minimum field width, an optional precision and an optional length modifier.

## Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:

**d**, **i** The int argument is converted to signed decimal notation. The precision, if any, gives the minimum number of digits that must appear; if the converted value requires fewer digits, it is padded on the left with zeros.  The default precision is 1.  When 0 is printed with an explicit precision 0, the output is empty.

**C** The int argument is converted to an unsigned char, and the resulting character is written.  If an l modifier is present, the wint_t (wide character) argument is converted to a multibyte sequence by a call to the wcrtomb(3) function, with a conversion state starting in the initial state, and the resulting multibyte string is written.

**S** The const char * argument is expected to be a pointer to an array of character type (pointer to a string).  Characters from the array are written up to (but not including) a terminating null byte ('\0'); if a precision is specified, no more than the number specified are written.  If a precision is given, no null byte need be present; if the precision is not specified, or is greater than the size of the array, the array must contain a terminating null byte.
Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

# EXAMPLES
_printf("Hello %c\n", i);
_printf("Hello %s\n" "world");
_printf("Length:[%d, %i]\n", len, len);

# BUGS
NULL cannot be printed, it throwns an error of segmentation fault

# COPYRIGHT
...
