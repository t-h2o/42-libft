/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:00:41 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/04 17:50:34 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void
	ft_putnbr_fd(int n, int fd)
{
	int		ten;
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		n = -n;
	ten = 1;
	while (ten < n)
		ten *= 10;
	while (ten != 1)
	{
		ten /= 10;
		c = '0' + n / ten;
		ft_putchar_fd(c, fd);
		n = n % ten;
	}
}
