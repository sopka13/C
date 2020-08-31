#include "head.h"

// произвольная программа на закрепление применения функции switch

int			main(void)
{
	char	a[1];
	
	a[0] = getchar();
	if (a[0] == EOF){
		printf("By\n");
		return 0;
	}
	else if (a[0] == '\n')
		main();
	else {
		ft_write(a[0]);
		main();
	}
	return 0;
}
