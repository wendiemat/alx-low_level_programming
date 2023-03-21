#include "main.h"

/**
* _isalpha - shows l if the input is a
letter. Another case, show 0
* @c: The character in ASCII code
* 
* Return: 1 for greater than 0. 0 is zero -1 is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{ 
_putchar(43);
return (1);
}
else if (n > 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
