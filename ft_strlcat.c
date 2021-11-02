/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:27 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 14:05:43 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stddef.h>
	
char
	*ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (n-- && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
