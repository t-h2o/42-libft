/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:17:09 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/27 18:24:48 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr = (char *)malloc(sizeof(char) * len);

	if (!ptr)
		return (0);
	return (ptr);	
}
