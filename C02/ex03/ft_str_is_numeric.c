/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:18:51 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 22:51:33 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int c;
	int resposta;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 48 && str[c] <= 57)
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
