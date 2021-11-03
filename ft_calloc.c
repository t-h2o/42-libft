/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:02:07 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 14:02:09 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

void
	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int	pol;

	if (!nmemb || !size)
		return (0);
	pol = nmemb * size;
	if (pol < 0)
		return (0);
	ptr = malloc(pol);
	if (!ptr)
		return (0);
	while (pol--)
		((char *)ptr)[pol] = 0;
	return (ptr);
}
