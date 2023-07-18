#include"main.h"

/**
 * print_alphabet - print alphabet in lowcase
 *
 */

void	print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a >= 'a' && a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
