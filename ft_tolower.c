/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:58:17 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/27 17:02:21 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int
	ft_isuppercase(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int
	ft_tolower(int c)
{
	if (ft_isuppercase(c))
		c += 'a' - 'A';
	return (c);
}
