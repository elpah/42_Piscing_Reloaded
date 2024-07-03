/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:22:22 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/06 22:31:18 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(array) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
