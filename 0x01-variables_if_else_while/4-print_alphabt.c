#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints the alphabet in lowercase except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char q = 'q';
	char e = 'e';

	while (letter <= 'z')
	{
		if (letter == e || letter == q)
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}

