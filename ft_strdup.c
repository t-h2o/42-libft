/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:59:52 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 13:59:53 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include	<stdlib.h>
#include	"libft.h"

char
	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	ft_strlcpy(str, s, s_len);
	return (str);
	
}	
