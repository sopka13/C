// присоединяет строку t к кону s, в s должно быть достаточно места

void strcat(char s[], char t[])
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0') // поиск конца строки
		i++;
	while ((s[i++] = t[j++]) != '\0') // запись t
		;
}