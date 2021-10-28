/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:32:42 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/27 17:11:30 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		if (((char *)s)[i] == (char)c)
			return ((void *)&(((char *)s)[i]));
	}
	return (0);
}
