#include <stdio.h>
/**
 * main - alphabet in lower case except e and q
 *
 *return: always success
 */ 
int main(void)
{
       char(letter);
	for (letter = 'a'; letter <='z'; letter++)
	{
	if (letter != 'e' && letter != 'q')
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
