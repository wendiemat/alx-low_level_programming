#include "main.h"

/**
* _isalpha - shows l if the input is a
letter. Another case, show 0
* @c: The character in ASCII code
* 
* Return: 1 for greater than 0. 0 is zero -1 is less than zero
*/
int print_last_digit(int)
{
int l;
l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}

