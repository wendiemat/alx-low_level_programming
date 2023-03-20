#include <stdlib.h>
#include <time.h>
/**
* main - print the last digit
* 
* Return: 0 (Success)
*/
int main(void)
{
	char c;
	char d;
	c = 'a';
	d = 'A';
while (c <= 'z') {
putchar(c);
c++;
	}
while (d <= 'Z') {
	putchar(d);
	d++;
	}
putchar('\n');
return (0);
}
