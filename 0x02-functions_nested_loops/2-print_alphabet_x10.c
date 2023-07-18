#include"main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 */

void	print_alphabet_x10(void)
{
	int	i;
	int	a;

	i = 0;
	while (i < 10)
	{
		a = 'a';
		while (a >= 'a' && a <= 'z')
			_putchar(a++);
		_putchar('\n');
		i++;
	}
}
