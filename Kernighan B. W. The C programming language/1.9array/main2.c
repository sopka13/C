#include <stdio.h>
#include <stdlib.h>

// программа получает на ввод строки, сохраняет их и выводит на экран самую длинную из них без ограничения длины
int		ft_getline(char *s);
void	ft_copy(char *to, char *from);

int			main(void)
{
	int		len;				// длина текущей строки
	int		max;				// текущая максимальная длина
	char	*line;		// текущая введеная строка
	char	*longest;	// самая длинная строка из введеных

	line = (char*)malloc(1);
	max = 0;
	longest = (char*)malloc(1);
	while ((len = ft_getline(line)) > 0) // цикл считывания строк
		if (len > max)			// если строка длиннее предыдущих
		{
			max = len;			// обновляем макс длину строки
			longest = (char*)realloc(longest ,max);
			ft_copy(longest, line);// перезаписываем макс строку в массиве
		}
	if (max > 0)				// если у нас на вводе была строка длиной >0
		printf("%s", longest);
	free(line);
	free(longest);
	return 0;
}

// функция считывает строку в s и возвращает ее длину
int		ft_getline(char *s)	// аргументы - адрес массива
{
	int	c, i;				// i - счетчик, с - возвращенный int из char

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s = (char*)realloc(s, i + 1);
		s[i] = c;
	}
	if (c == '\n') 				// если нашел конец строки то записывает его
	{
		s[i] = c;
		++i;
	}
	return i;					// возвращаем длину строки
}

// функция записывает массив from в массив to
void	ft_copy(char *to, char *from)
{
	int	i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
