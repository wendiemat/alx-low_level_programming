#include <stdio.h>
/**
* main - print digit from 0 to 9
* 
* Return: 0 (Success)
*/
int main(void)
{
int n ;
for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
puchar(' ');
}
putchar('\n');
return (0);
}}
