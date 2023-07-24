#include"main.h"

/*
 * _puts - put str.
 * @str: str.
 */

void _puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
}
