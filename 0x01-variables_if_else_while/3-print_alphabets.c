#include <stdio.h>
/**
*alphabet in upper and lower cases
*main - main function
*
*Return: Always true
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
