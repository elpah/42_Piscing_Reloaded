// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_sort_params.c                                   :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/06/04 21:46:16 by eobeng            #+#    #+#             */
// /*   Updated: 2024/06/10 03:54:11 by elpah            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// void ft_putchar(char c);

// void ft_putstr(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// 	ft_putchar('\n');
// }

// int ft_strcmp(char *s1, char *s2)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 0;
// 	while ((s1[i] || s2[j]) && (s1[i] == s2[j]))
// 	{
// 		i++;
// 		j++;
// 	}
// 	return ((unsigned char)(s1[i]) - (unsigned char)(s2[j]));
// }

// void ft_swap(char *str1, char *str2)
// {
// 	char temp;

// 	temp = *str1;
// 	*str1 = *str2;
// 	*str2 = temp;
// }

// void ft_print_args(int lenght, char **argv)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	j = 1;
// 	while (j < lenght)
// 	{
// 		ft_putstr(argv[j]);
// 		i = 0;
// 		j++;
// 	}
// }

// int main(int argc, char **argv)
// {
// 	int i;
// 	char *temp;

// 	i = 1;
// 	while (i < argc - 1)
// 	{
// 		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
// 		{
// 			temp = argv[i];
// 			argv[i] = argv[i + 1];
// 			argv[i + 1] = temp;
// 			i = 1;
// 		}
// 		else
// 		{
// 			i++;
// 		}
// 	}
// 	ft_print_args(argc, argv);
// }

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void ft_swap(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int ft_strcmp(char *str1, char *str2)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while ((str1[i] || str2[i]) && (str1[i] == str2[j]))
	{
		i++;
		j++;
	}
	return ((unsigned int)(str1[i]) - (unsigned int)str2[j]);
}
int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;

	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j = 1;
		}
		j++;
	}

	j = 1;

	while (j < argc)
	{

		ft_putstr(argv[j]);

		j++;
	}
	// return (0);
}