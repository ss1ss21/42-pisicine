/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssonmez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:03:45 by ssonmez           #+#    #+#             */
/*   Updated: 2022/08/04 15:44:14 by ssonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i - 1] < 'a') || (str[i - 1] > 'z'))
			&& ((str[i - 1] < 'A') || (str[i - 1] > 'Z'))
			&& ((str[i - 1] < '0') || (str[i -1] > '9'))
			&& ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
