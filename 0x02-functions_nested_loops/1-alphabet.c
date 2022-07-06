#include "main.h"
/**
 *main - print_alphabet
 *
 * Description: prints alphabets in lowercase
 *
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
