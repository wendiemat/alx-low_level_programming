#include "main.h"

/**
* main - prints _putchar to student
* 
* Return: 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
