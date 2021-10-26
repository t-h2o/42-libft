/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:32:42 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/26 17:36:10 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char*)s;
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		++i;
	}	
	return (0);
}
