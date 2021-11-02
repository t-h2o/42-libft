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
	if (!nmemb || !size)
		return (0);
	ptr = malloc(nmemb * size);
	return (ptr);
}
