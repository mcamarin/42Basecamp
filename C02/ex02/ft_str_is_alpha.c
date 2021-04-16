/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:50:39 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 23:00:40 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int c;
	int resposta;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 65 && str[c] <= 90) || \
		(str[c] >= 97 && str[c] <= 122))
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
