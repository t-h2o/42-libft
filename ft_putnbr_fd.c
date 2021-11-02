/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:00:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 14:00:43 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<unistd.h>

void
	ft_putnbr_fd(int n, int fd)
{
	int	ten;
	char	c;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n == -200)
		return ;
	if (n < 0)
		write(fd, "-", 1);
	if (n < 0)
		n = -n;
	ten = 1;
	while (ten < n)
		ten *= 10;
	while (ten != 1)
	{
		ten /= 10;
		c = '0' + n / ten;
		write(fd, &c, 1);
		n = n % ten;
	}
}
