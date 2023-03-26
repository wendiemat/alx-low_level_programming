#include <stdio.h>
/**
* main - print digit from 0 to 9
* 
* Return: 0 (Success)
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
        putchar(ch);
}
putchar('\n');
return (0);
}
