#include"main.h"

/**
 * _puts - put str.
 * @str: str.
 * Return: NA.
 */

void _puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
