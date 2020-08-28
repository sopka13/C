#include <stdio.h>
#define MAXLINE 1000			// максимальная длина строки в потоке

// программа получает на ввод строки, сохраняет их и выводит на экран самую длинную из них
int		ft_getline(char *s, int lim);
void	ft_copy(char *to, char *from);

int			main(void)
{
	int		len;				// длина текущей строки
	int		max;				// текущая максимальная длина
	char	line[MAXLINE];		// текущая введеная строка
	char	longest[MAXLINE];	// самая длинная строка из введеных

	max = 0;
	while ((len = ft_getline(line, MAXLINE)) > 0) // цикл считывания строк
		if (len > max)			// если строка длиннее предыдущих
		{
			max = len;			// обновляем макс длину строки
			ft_copy(longest, line);// перезаписываем макс строку в массиве
		}
	if (max > 0)				// если у нас на вводе была строка длиной >0
		printf("%s", longest);
	return 0;
}

// функция считывает строку в s и возвращает ее длину
int		ft_getline(char *s, int lim)	// аргументы - адрес массива и длина
{
	int	c, i;				// i - счетчик, с - возвращенный int из char

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;				// цикл работает пока не нашел EOF и кнц стр
	if (c == '\n') 				// если нашел конец строки то записывает его
	{
		s[i] = c;
		++i;
	}
	return i;					// возыращаем длину строки
}

// функция записывает массив from в массив to
void	ft_copy(char *to, char *from)
{
	int	i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
