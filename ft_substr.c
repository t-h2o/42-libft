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

#include	"libft.h"

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	i = start;
	while (s[i] && len--)
	{
		ptr[i-start] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);	
}

