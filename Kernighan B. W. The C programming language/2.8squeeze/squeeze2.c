// удаляет все символы из строки s которые встречаются в строке c

void squeeze2(char s[], int c[])
{
	int i, j, k;

	for (i = j = 0; s[i] != '\0'; i++){
		for (k = 0; c[k] != '\0'; k++){
			if (s[i] != c[k])
				s[j++] = s[i];
		}
	}
	s[j] = '\0';
}
