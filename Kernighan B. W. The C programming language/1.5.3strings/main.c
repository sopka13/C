#include <stdio.h>
/*
// подсчет строк во входном потоке

int main(void)
{
	int c, nl, nt, np;

	nl = 0;
	nt = 0;
	np = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++nt;
		else if (c == ' ')
			++np;
	printf("Количество строк: %d\n", nl);
	printf("Количество табов: %d\n", nt);
	printf("Количество пробелов: %d\n", np);
}*/

// замена количеста пробелов во входном потоке на один
/*
int	main(void)
{
	int	c, k;
	char a[100];

	k = 0;
	while ((c = getchar()) != EOF)
	{
		a[k] = c;
		if (a[k] == ' ')
		{
			if (a[k - 1] == ' ')
			{
				--k;
			}
		}
		++k;
	}
	a[k] = '\0';
	printf("%s\n", a);
	return 0;
}*/

// копирование входного потока в выходной с заменой знаков табуляции на \t, символов возврата назад на \b, обратных косых черт на \\

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			c = '\t';
		else if (c == 8)
			c == '\b';
		else if (c == '/')
			c == '\\';
		putchar(c);
	}
	return 0;
}
