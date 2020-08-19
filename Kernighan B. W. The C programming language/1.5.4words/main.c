#include <stdio.h>

#define IN	1 // внутри слова
#define OUT	0 // снаружи слова

// программа подсчета строк, слов и символов во входном потоке

int main(void)
{
	int	c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
