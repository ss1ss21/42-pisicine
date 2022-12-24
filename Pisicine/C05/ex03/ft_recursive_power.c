/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 20:24:27 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/08 21:10:24 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		b;

	b = nb;
	if (power == 0)
		return (1);
	if ((nb == 0) || (power < 0))
		return (0);
	if (power == 1)
		return (nb);
	else if (power > 0)
	{
		b = nb * ft_recursive_power(nb, power - 1);
	}
	return (b);
}
