/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 03:21:13 by snovaes           #+#    #+#             */
/*   Updated: 2021/04/14 19:01:52 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f') ||
		(str[i] == '\n') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res * sign);
}
