#include <stdio.h>
/**
 * main - prints alphabet in lower case ten times
 *
 * Return - always success
 */
int main(void)
{
	char letter;
	int count = 0;
	

	while (count < 10)
	{
	for (letter = 'a'; letter<='z'; letter++)
		_putchar(letter);

	}
	_putchar('\n');

	
	return (0);
}
