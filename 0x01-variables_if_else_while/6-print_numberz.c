#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program prints out numbers of base 10 using "putchar"
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
