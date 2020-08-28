#include <stdio.h>

// программа для подсчета цифр, символов пустого пространства, остальных
/*
int		main(void)
{
	int	c, i, nwhite, nother;
	int	ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits = ");
	for (i = 0; i< 10; ++i)
		printf("%d", ndigit[i]);
	printf(", white spase = %d, other = %d\n", nwhite, nother);
	return 0;
}*/

// Программа построения гистограммы длин слов во входном потоке
int	main(void)
{
	int	a, c, d, e;
	int b[10]; // 10 - максимальная дина слова во вх. потоке

	c = d = 0;
	for (a = 0; a < 10; ++a)
		b[a] = 0;

	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\n' && c != '\t')
			++d;
		else
		{
			++b[d];
			d = 0;
		}
	}
	for (a = 0; a < 10; ++a)
	{
		printf("%d", a);
		for (e = 1; e <= b[a]; ++e)
			printf("+");
		printf("\n");
	}
	return 0;
}
