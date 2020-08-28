#include <stdio.h>

// программы побитовых операций над элементами

// программа вывода на печать числа в двоичном виде

void bin_print(unsigned char n)
{
	for (int i = 0; i < 8; i++)
	{
		printf("%c", (n & 0x80) ? '1' : '0');
		n <<= 1;
	}
	printf("\n");
}

// логический оператор И - AND '&'
/*
int main(void)
{
	char a = 4;
	char b = 7;
	char c = a & b;

	bin_print(a);
	bin_print(b);
	bin_print(c);
	printf("%d\n", c);
	return 0;
}

// логический оператор ИЛИ - OR '|'

int main(void)
{
	char a = 30;
	char b = 7;
	char c = a | b;

	bin_print(a);
	bin_print(b);
	bin_print(c);
	printf("%d\n", c);
	return 0;
}

// логический оператор исключающее ИЛИ - XOR '^'

int main(void)
{
	char a = 30;
	char b = 7;
	char c = a ^ b;

	bin_print(a);
	bin_print(b);
	bin_print(c);
	printf("%d\n", c);
	return 0;
}

// логический оператор НЕ - NOT '~'

int main(void)
{
	char a = 3;
	char b = 7;
	char c = ~a;

	bin_print(a);
	bin_print(b);
	bin_print(c);
	printf("%d\n", c);
	return 0;
}

// программа для перевода числа в отрицательное побитово

int main(void)
{
	char a = 89;
	char b = ~a + 1;

	bin_print(a);
	bin_print(b);
	printf("%d\n%d\n", a, b);
}*/

// побитовые сдвиги >> и << смещают все влево или вправо

int main(void)
{
	char a = 89;
	char b = a >> 1;

	bin_print(a);
	bin_print(b);
	printf("%d\n%d\n", a, b);
}
