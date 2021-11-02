/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:24:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 19:59:38 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>	

int	ft_isblank(char c)
{
	if (c == '\t'
		|| c == '\v'
		|| c == '\r'
		|| c == '\n'
		|| c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		nb;
	int		neg;
	size_t	i;

	i = 0;
	while (ft_isblank(str[i]))
		i++;
	neg = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = 1;
		++i;
	}
	nb = 0;
	while (ft_isdigit(str[i]))
	{
		nb += (nb * 10) + (str[i] - '0');
		printf("--> %d\n", nb);
		i++;
	}
	if (neg)
		return (nb * -1);
	return (nb);
}
