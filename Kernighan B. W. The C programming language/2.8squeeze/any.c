// функция возвращает номер первой позиции в строке s1 в которой находится какой либо из символов строки s2, либо -1 если строка s1 не содержит ни одного символа из s2
#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++){
		for (j = 0; s2[j] != '\0'; j++){
			if (s1[i] == s2[j])
				return i;
		}
	}
	return -1;
}

int main(void)
{
	char *s1 = "Hello world!";
	char *s2 = "q!";

	printf("%d\n", any(s1, s2));
	return 0;
}
