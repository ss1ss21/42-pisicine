/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:50:22 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/08 20:21:59 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		a;
	int		b;

	b = nb;
	a = 1;
	if (power == 0)
		return (1);
	if ((nb == 0) || (power < 0))
		return (0);
	if (power == 1)
		return (nb);
	while (a != power)
	{
		a++;
		b = b * nb;
	}
	return (b);
}
