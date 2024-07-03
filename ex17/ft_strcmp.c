/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elpah <elpah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 13:27:52 by eobeng            #+#    #+#             */
/*   Updated: 2024/06/09 03:49:06 by elpah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the function returns an int and takes two arguments. A pointer to two null terminated strings.
int ft_strcmp(char *s1, char *s2)
{
	// declare variables i and j. to represent a character at each point of the string.
	int i;
	int j;

	// initialize the variables setting values to 0. 0 will be the starting point of the string/ array of characters

	i = 0;
	j = 0;

	// check whiles s1 or s2 are not null terminated and s1 is equal to s2 at every position.
	while ((s1[i] || s2[j]) && (s1[i] == s2[j]))
	{
		// increment to move to next position of string.
		i++;
		j++;
	}
	//  return the difference between the ascii value
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[j]));
}

// for example, if we are comparing Hello and Help, at every posion H,e,l, it is okay. when it gets to
//  position l in hello and p in help, it will jump the while loop and return the ascii difference value of
//  l and p ie: l - p. in ascii that is 108 - 112.
