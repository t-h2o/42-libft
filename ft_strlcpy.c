/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:13 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 14:04:32 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stddef.h>
	
char
	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	
	i = 0;
	while (n-- && src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
