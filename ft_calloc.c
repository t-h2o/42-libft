/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:02:07 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/05 11:46:09 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void
	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int		pol;

	if (!nmemb || !size)
		return (0);
	pol = nmemb * size;
	if (pol < 0)
		return (0);
	ptr = malloc(pol);
	if (!ptr)
		return (0);
	ft_bzero(ptr, pol);
	return (ptr);
}
/* size		vol. case dune etagere
 * nmemb	nb de case de letagere
 *
 * size * nmemb = vol. totale de letagere
 */
