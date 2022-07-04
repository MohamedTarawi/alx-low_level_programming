#include <stdio.h>
/**
* main - Alphabet in lower case except e and q
*
*Return: always success
*/
int main(void)
{
	char(letter);
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter != 'q' && letter != 'e')
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
