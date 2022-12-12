#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * follwed by a new line, expect q and e
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		putchar(la);
	}

	putchar('\n');

	return (0);
}
