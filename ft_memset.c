/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:51:51 by tgrivel           #+#    #+#             */
/*   Updated: 2021/10/26 14:09:58 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned int size_t;

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	fill;

	fill = c;
	i = 0;
	while (i < len)
	{
		//b[i] = fill;
		i++;
	}
	return (b);
}
