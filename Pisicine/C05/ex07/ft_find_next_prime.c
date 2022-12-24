/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:30:04 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/09 18:36:55 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int		a;
	int		b;

	a = 0;
	if (nb < 0)
		return (2);
	while (0 == 0)
	{
		b = 0;
		a = 0;
		while (a != nb)
		{
			a++;
			if (0 == nb % a)
				b++;
		}
		if (b == 2)
			return (a);
		nb++;
	}
	return (0);
}