/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:39:24 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 22:56:49 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int count;
	unsigned int position;
	unsigned int hold;

	hold = 0;
	count = 1;
	position = 0;
	while (src[hold])
	{
		hold++;
	}
	if (hold != 0)
	{
		while (count < size)
		{
			dest[position] = src[position];
			count++;
			position++;
		}
	}
	dest[position] = '\0';
	return (hold);
}
