/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:19:23 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/01 21:46:18 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		b;
	int		c;

	i = 0;
	while (i != (size - 1))
	{
		b = i + 1;
		while (b != size)
		{
			if (tab[i] >= tab[b])
			{
				c = tab[i];
				tab[i] = tab[b];
				tab[b] = c;
				b++;
			}
			else
			{
				b++;
			}
		}
		i++;
	}
}
