#include <stdio.h>

int	main(void)
{
	int	c, a;

	while ((c = getchar()) != EOF)
		putchar(c);
	a = getchar() != EOF;
	printf("%d\n", a);
	printf("%d\n", EOF);
	return 0;
}
