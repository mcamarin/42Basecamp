/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:34:02 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 23:00:59 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int c;
	int resposta;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
			c++;
		else
		{
			resposta = 0;
			break ;
		}
	}
	if (str[c] == '\0')
		resposta = 1;
	return (resposta);
}
