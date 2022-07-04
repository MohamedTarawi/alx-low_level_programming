#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: always success
 */
int main(void)
{
	int i;
	int x;

	for (i = 0; i < 9; i++)
	{
		for (x = i + 1; x < 10; x++)
		{
			putchar((i % 10) + '0');
			putchar((x % 10) + '0');

			if (i == 8  && x == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

			putchar('\n');

			return (0);
}
