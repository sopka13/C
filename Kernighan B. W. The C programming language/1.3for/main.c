
#include <stdio.h>

#define	LOWER	0		//нижний предел диапазона
#define	UPPER	300		//верхний предел
#define	STEP	20		//размер шага

int main(void)
{
	int	fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));;
	return 0;
}
