/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eobeng <eobeng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:13:17 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/05 20:11:04 by eobeng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= -1)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else if (nb > 0)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
