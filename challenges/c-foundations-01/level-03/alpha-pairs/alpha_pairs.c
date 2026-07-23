#include <unistd.h>

int	main(int argc, char **argv)
{
	char	letter;
	int		index;

	(void)argc;
	(void)argv;
	letter = 'a';
	index = 0;
	while (letter <= 'z')
	{
		if (index % 2 == 0)
		{
			write(1, &letter, 1);
			write(1, &letter, 1);
		}
		else
		{
			letter = letter - 32;
			write(1, &letter, 1);
			write(1, &letter, 1);
			letter = letter + 32;
		}
		letter++;
		index++;
	}
	write(1, "\n", 1);
	return (0);
}