/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:49:07 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 13:49:11 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void
	rm_samechar(const char *set, char *list)
{
	int	i = -1;
	int	j;
	while (set[++i])
	{
		j = -1;
		while (list[++j])
			if (list[j] == set[i])
				break ;
		if (!list[j])
			list[j] = set[i];
	}

}
/*	add in a string set'string whithout same char
 */

size_t
	len_whithout_set(const char *s1, char *list)
{
	size_t	i;
	size_t	j;
	size_t	str_len;

	i = -1;
	str_len = 1;
	while (s1[++i])
	{
		j = -1;
		while (list[++j])
			if (list[j] == s1[i])
				break;
		if (!list[j])
			str_len++;
	}
	return (str_len);
}	
char
	*ft_strtrim(const char *s1, const char *set)
{
	char	list[127];
	char	*str;
	int	i;
	int	j;
	size_t	str_len;

	rm_samechar(set, list);

	str_len = len_whithout_set(s1, list);
	
	str = (char *)malloc(str_len);

	i = -1;
	str_len = 0;
	while (s1[++i])
	{
		j = -1;
		while (list[++j])
			if (list[j] == s1[i])
				break;
		if (!list[j])
			str[str_len++] = s1[i];
	}

	return (str);
}
