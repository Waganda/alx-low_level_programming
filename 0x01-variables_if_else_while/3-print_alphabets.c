#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LT = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (LT = 'A')
	{
		putchar(LT);
		LT++;
	}
	putchar('\n');

	return (0);
}
