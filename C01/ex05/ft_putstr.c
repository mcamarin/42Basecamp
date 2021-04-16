/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 03:54:33 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/11 19:01:22 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	string;

	string = 0;
	while (str[string] != '\0')
	{
		write(1, &str[string], 1);
		string++;
	}
}
