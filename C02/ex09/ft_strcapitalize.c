/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:38:27 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 22:52:02 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if ((str[c - 1] < 48 || str[c - 1] > 57)
		&& (str[c - 1] < 65 || str[c - 1] > 90)
		&& (str[c - 1] < 97 || str[c - 1] > 122))
		{
			if (str[c] >= 97 && str[c] <= 122)
				str[c] = str[c] - 32;
			c++;
		}
		else if ((str[c - 1] >= 65 && str[c - 1] <= 90)
		|| (str[c - 1] >= 97 && str[c - 1] <= 122)
		|| (str[c - 1] >= 48 && str[c - 1] <= 57))
		{
			if (str[c] >= 65 && str[c] <= 90)
				str[c] = str[c] + 32;
			c++;
		}
		else
			c++;
	}
	return (str);
}
