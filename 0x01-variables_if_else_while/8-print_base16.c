#include <stdio.h>
/**
* main - prints base sixteen numbers
*
* return: always success
*/
int main(void)
{
	int i;
	char x; 
	for (i = 1; i<= 10; i++)
		putchar(i);

	for (x = 'a'; x<='f'; x++)
		putchar(x);

	putchar('\n');
	return (0);
}
