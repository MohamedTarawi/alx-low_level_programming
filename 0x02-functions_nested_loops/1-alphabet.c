#include <main.c>
/**
 * main - prints the alphabet in lower case followed by a line 
 *
 * Return: always success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter ++)
		putchar(letter);

	putchar('\n');

	return (0);
}
