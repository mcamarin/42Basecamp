/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 21:21:15 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/14 03:14:26 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int c;
	int resposta;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] > 31 && str[c] < 127)
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
