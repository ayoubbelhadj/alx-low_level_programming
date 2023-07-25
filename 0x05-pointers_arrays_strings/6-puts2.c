#include"main.h"

/**
 * puts2 - put str.
 * @str: str.
 * Return: NA.
 */

void puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
