/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 21:01:15 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/06 23:24:19 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 10000

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_buff(char *buf, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &buf[i], 1);
		i++;
	}
}

int	ft_close(int fd)
{
	if (close(fd) == -1)
	{
		ft_putstr("Error closing file.\n");
		return (-1);
	}
	return (0);
}

int	ft_display_file(char **av)
{
	int		fd;
	int		read_ret;
	char	buffer[BUF_SIZE];

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	read_ret = read(fd, buffer, sizeof(buffer));
	while (read_ret > 0)
	{
		ft_print_buff(buffer, read_ret);
		read_ret = read(fd, buffer, sizeof(buffer));
	}
	if (read_ret == -1)
	{
		ft_putstr("Cannot read file.\n");
		close(fd);
		return (0);
	}
	if (ft_close(fd) == -1)
		return (-1);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac == 1)
		ft_putstr("File name missing.\n");
	else
	{
		ft_display_file(av);
	}
	return (0);
}
