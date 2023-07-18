#include"main.h"

/**
* main - print _putchar, followed by a new line.
* Return: Always 0 (Success)
*/

void	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	_putstr("_putchar\n");
	return (0);
}
