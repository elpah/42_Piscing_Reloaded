/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:29:07 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/05 18:34:09 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	if (nb < 1)
		return (0);
	i = 1;
	while (i * i < (unsigned int)nb)
	{
		i++;
	}
	if (i * i == (unsigned int)nb)
		return (i);
	else
		return (0);
}
