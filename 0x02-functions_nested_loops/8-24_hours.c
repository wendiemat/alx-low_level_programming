#include "main.h"

/**
* _isalpha - shows l if the input is a
letter. Another case, show 0
* @c: The character in ASCII code
* 
* Return: 1 for greater than 0. 0 is zero -1 is less than zero
*/
void jack_bauer(void)
{
int a, b, c, d;
for (a = 0; a <=2; a++)
{
for (b = 0; a <= 9; b++)
{
for (c = 0; c <= 5; c++)
{
for (d = 0; d <= 9; d++)
{
if (a >= 2 && b >= 4)
break;
_putchar(a + 48);
_putchar(b + 48);
_putchar(58);
_putchar(c + 48);
_putchar(d + 48);
_putchar('\n');
}
}
}
}

