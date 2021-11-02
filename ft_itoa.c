/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgrivel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:47:58 by tgrivel           #+#    #+#             */
/*   Updated: 2021/11/02 17:50:20 by tgrivel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdlib.h>

int
	nb_char(int n)
{
	int			nb;
	long int	ten;

	ten = 1;
	nb = 0;
	if (n < 0)
		nb++;
	while ((long int)n >= ten || -(long int)n >= ten)
	{
		ten *= 10;
		nb++;
	}
	if (n == 0)
		nb = 1;
	return (nb);
}

int
	return_ten(int n)
{
	long int	ten;

	ten = 1000000000;
	while (ten > n)
		ten /= 10;
	return (ten);
}

char
	*ft_itoa(int n)
{
	char		*s;	
	int			i;
	int			c;
	long int	ten;

	c = nb_char(n);
	s = (char *)malloc(c + 1);
	if (!s)
		return (0);
	s[c] = 0;
	i = 0;
	if (n == -2147483648)
		s = "-2147483648";
	if (n == 0)
		s = "0";
	if (n == -2147483648 || n == 0)
		return (s);
	if (n < 0)
		s[i++] = '-';
	if (n < 0)
		n = -n;
	ten = return_ten(n);
	while (i < c)
	{
		s[i] = n / ten + '0';
		n -= (s[i] - '0') * ten;
		ten /= 10;
		i++;
	}	
	return (s);
}
