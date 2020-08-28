#include <stdio.h>

// возведение base в n-ю степень

int power(int base, int n)
{
	int n;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
