#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program prints lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'z'; b >= 'a'; b--)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
