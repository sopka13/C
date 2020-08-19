/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyohn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 13:45:41 by eyohn             #+#    #+#             */
/*   Updated: 2020/08/13 14:49:07 by eyohn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(int argc, char **argv)
{
	char	buf[1];
	int		fd;

	fd = open(argv[1], O_WRONLY);
	if (fd == -1)
	{
		ft_putchar(basename(argc[0]));
		ft_putchar(": ");
		ft_putchar(argc[i]);
		ft_putchar(": ");
		ft_putchar(strerror(errno));
		ft_putchar("\n");
	}
	while (read(0, &buf, 1))
		write(2, argv[1], 1);
	close (fd);
	return (0);
}
