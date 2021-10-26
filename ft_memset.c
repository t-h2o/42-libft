/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:51:51 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/26 14:26:44 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int size_t;

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char	fill;
	char	*ptr;

	ptr = (char*)b;
	fill = c;
	i = 0;
	while (i < len)
	{
		ptr[i] = fill;
		i++;
	}
	return (ptr);
}
