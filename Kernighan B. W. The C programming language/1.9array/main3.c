#include <stdio.h>
#include <stdlib.h>

// программа получает на ввод строки, сохраняет их и выводит на экран те которые длиннее 80 символов

void	ft_getline(char **s);
void	ft_copy(char *to, char *from);
void	ft_free(char **line);

int		num_line = 0; 					// количество записанных строк
int		*num_char;						// количество симолов в строке

int			main(void)
{
	int		i;
	int		max;
	char	**line;						// массив записанных строк

	i = 0;
	line = (char**)malloc(sizeof(char*));
	num_char = (int*)malloc(2);
	ft_getline(line);
	while (i < num_line)
	{
		if (num_char[i] > 5)
			printf("%s", line[i]);
		++i;
	}
	ft_free(line);
	return 0;
}

// функция считывает строку в s и возвращает ее длину
void	ft_getline(char **s)	// аргумент - адрес массивов строк
{
	int	c, i, k;

	for (k = 0; c != EOF; ++k)
	{
		s[k] = (char*)malloc(1);
		for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		{
			s[k] = (char*)realloc(s[k], i + 1);
			s[k][i] = c;
		}
		if (c == '\n')
		{
			s[k][i] = c;
			++i;
		}
//		num_char = (int*)realloc(num_char, (sizeof(num_char) + sizeof(int)));
		num_char[k] = i;
	}
	printf("%d", k);
	num_line = k - 1;
}

// функция очищает память после выполнения функции
void	ft_free(char **line)
{
	int	i;

	i = 0;
	while (i < num_line)
	{
		free(line[i]);
		++i;
	}
}
