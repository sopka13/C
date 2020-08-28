#include <stdio.h>

// программа которая подсчитывает количество едини в двочном представлении числа

int main(void)
{
	int x = 122;
	int b;

	for (b =0; x != 0; x >>= 1)
		if (x & 01)
			b++;
	printf("%d\n", b);
}
