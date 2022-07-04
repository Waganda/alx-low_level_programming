#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;
	int s;

	s = 0;
	while (s < 10)
	{
		putchar(s + '0');
		s++;
	}
	letter = 'a';
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

