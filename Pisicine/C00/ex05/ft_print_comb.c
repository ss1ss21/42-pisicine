/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:49:43 by ssonmez           #+#    #+#             */
/*   Updated: 2022/07/25 19:55:23 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char d, char x);

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = '2';
	b = '1';
	c = '0';
	while (c < '8')
	{
		while (b < '9')
		{
			while (a <= '9')
			{
				ft_putchar(c, b, a);
				if (c != '7')
					write(1, ", ", 2);
				a++;
			}
			b++;
			a = b + 1;
		}
		c++;
		b = c;
	}	
}

void	ft_putchar(char c, char d, char x)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &x, 1);
}
