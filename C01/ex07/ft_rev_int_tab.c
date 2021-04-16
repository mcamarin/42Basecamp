/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 21:46:45 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/11 02:12:49 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int c;
	int t[size];

	c = 0;
	index = size - 1;
	while (index >= 0)
	{
		t[c] = tab[index];
		index--;
		c++;
	}
	c = 0;
	while (c < size)
	{
		tab[c] = t[c];
		c++;
	}
}
