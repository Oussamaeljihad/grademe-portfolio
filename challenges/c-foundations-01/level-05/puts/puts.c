#include <unistd.h>

int	puts(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (write(1, &s[i], 1) != 1)
			return (-1);
		i++;
	}
	if (write(1, "\n", 1) != 1)
		return (-1);
	return (0);
}