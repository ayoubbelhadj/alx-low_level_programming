#include<unistd.h>

/**
* main - print _putchar, followed by a new line.
* Return: Always 0 (Success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
