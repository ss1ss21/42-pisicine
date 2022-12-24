/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:05:42 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/11 12:40:41 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *c, char *b)
{
	int	i;

	i = 0;
	while (c[i] == b[i] && c[i] && b[i])
		i++;
	return (c[i] - b[i]);
}

void	ft_sort(char ac, char **av)
{
	int		i;
	int		c;
	char	*tmp;

	c = 1;
	i = 1;
	if (ac > 1)
	{
		while (c < (ac - 1))
		{
			i = c + 1;
			while (av[i])
			{
				if ((ft_strcmp(av[c], av[i])) > 0)
				{
					tmp = av[c];
					av[c] = av[i];
					av[i] = tmp;
				}
				i++;
			}
			c++;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort(ac, av);
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
