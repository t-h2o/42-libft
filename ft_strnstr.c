/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:58:37 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 13:58:41 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stddef.h>

char
	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	while (haystack[i] && n--)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (!needle[j])
				return (ptr);
		}
		else
		{
			j = 0;
			ptr = &((char*)haystack)[i];
		}
		i++;
	}
	return (0);

}
