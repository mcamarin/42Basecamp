/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:50:01 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/13 23:01:22 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int c;
	int resposta;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 65 && str[c] <= 90)
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
