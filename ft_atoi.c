/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:24:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/26 15:09:33 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_isblank(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == ' ')
		return (1);
	return (0);
}

int	ft_return(const char *str, int i, int lim)
{
	int	nbr;
	int	ten;

	nbr = 0;
	ten = 1;
	while (--i >= lim)
	{
		nbr += (str[i] - '0') * ten;
		ten *= 10;
	}
	while (str[i] == '0')
		i--;
	if (str[i] == '-')
		return (nbr * (-1));
	return (nbr);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	lim;
	int	aera;

	lim = 0;
	i = -1;
	aera = 0;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]) && !ft_isblank(str[i]) && !ft_issign(str[i]))
			break ;
		if (!ft_isdigit(str[i]) && aera == 1)
			break ;
		if (ft_isblank(str[i]) || ft_issign(str[i]))
			lim++;
		if (ft_issign(str[i]))
			if (ft_issign(str[i + 1]) || ft_isblank(str[i + 1]))
				return (0);
		if (ft_isdigit(str[i]))
			aera = 1;
	}
	if (!aera)
		return (0);
	return (ft_return(str, i, lim));
}

/*	
 *	number ??
 *
 *
 *	shit number shit
 *	shit number
 *	number shit
 *	number
 *
 */
