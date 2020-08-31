#include <stdio.h>

//конструкция else-if

int main(void)
{
	int n = 0;

	if (n == 0)
		printf("n = 0");
	else if (n == 1)
		printf("n = 1");
	else if (n == 2)
		printf("n = 2");
	else
		printf("Я не знаю какое число");
	return 0;
}
