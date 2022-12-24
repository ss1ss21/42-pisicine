/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:42:53 by ssonmez           #+#    #+#             */
/*   Updated: 2022/07/26 18:02:46 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazici(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

		a = 0;
		b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			yazici(a / 10 + '0');
			yazici(a % 10 + '0');
			yazici(' ');
			yazici(b / 10 + '0');
			yazici(b % 10 + '0');
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
