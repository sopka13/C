#include <stdio.h>
// подсчет символов во входном потоке 2 версии
/*
int main(void)
{
	long	nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}*/

int main(void)
{
	double	nc;

	for	(nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
	return 0;
}
