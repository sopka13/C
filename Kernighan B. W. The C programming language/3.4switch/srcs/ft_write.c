#include "head.h"

void		ft_write(char a)
{
	char	b[] = "Вы нажали ";
	int		n;

	for(n = 0; b[n] != '\0'; ++n)
		write(1, &b[n], 1);
	write(1, &a, 1);
	write(1, "\n", 1);
}
