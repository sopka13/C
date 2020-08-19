#include <stdio.h>

// программа которая читает со стандартного ввода и выводит на экран, в случае ошибки выводит текст ошибки на экран

int		main(void)
{
	int	c;

	while ((c = getchar()) != EOF)
	{
		printf("%c", (char) c);
		fflush(stdout);
	}
	if (ferror(stdin))
	{
		perror("getchar failed");
		return 1;
	}
	return 0;
}
