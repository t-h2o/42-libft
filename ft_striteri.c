/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:40 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 13:59:43 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void
	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		f(i , &s[i]);
		i ++;
	}
	return ;
}
