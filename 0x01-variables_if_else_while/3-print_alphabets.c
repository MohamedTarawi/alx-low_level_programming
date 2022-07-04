#include <stdio.h>
/**
*main - main - Prints the alphabet in lowercase, and then in uppercase.
*
*Return: Always true
*
*/
int main(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
	putchar (letter);


	putchar('\n');
	return (0);
}
