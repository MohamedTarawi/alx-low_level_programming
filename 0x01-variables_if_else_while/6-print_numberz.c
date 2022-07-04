#include <stdio.h>
/**
*main - list base ten number from 0 to 1os
*
*
*Return: always success
*/
int main(void)
{
	int i;
	{
		for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');
	}
		putchar('\n');
		return (0);
}
