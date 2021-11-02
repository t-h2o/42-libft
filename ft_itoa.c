#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

int
	nb_char(int n)
{
	int	nb;
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

	printf("nb char %d\n", nb);
	return (nb);
}

char
	*ft_itoa(int n)
{
	char	*s;	
	int	i;
	int	c;
	long int	ten;

	c = nb_char(n);
	s = (char *)malloc(sizeof(char) * (c + 1));	
	if (!s)
		return (0);
	s[c] = '\0';
	
	i = 0;	
	if (n == -2147483648)
		s = "-2147483648";
	if (n == -2147483648)
		return (s);
	if (n < 0)
		s[i++] = '-';
	if (n < 0)
		n = -n;
	
	ten = 1000000000;
//	ten =-2147483648;
	
	while (ten >= n)
		ten /= 10;	
	
	while (i <= c)
	{
		s[i] = n / ten;
		n -= s[i] * ten;
		s[i] += '0';
	}	
	return (s);
}

/*	
 *	10000
 *	1000
 *	100
 *
 *	123 / 100
 *	= 1
 *	n = 123 % 100
 *	123
 *
 */
/*
 * 	123 % 10 = 3
 * 	3 / 1 = 3
 *
 * 	123 % 100 = 23
 *	23 / 10 = 2
 *
 *	123 % 100 = 123
 *	123 / 100 = 1
 */
/*	s[0-3]
 *	s[3] = '\0'
 *	201 % 10 = R 1 
 *	1 / 1 = 1
 *	s[2] = 1
 *	
 *	201 % 100 = 2
 *	1 / 10 = 0
 *	s[1] = 0
 *
 *	201 % 1000 = 201
 *	201 / 100 = 2
 *	s[0] = 2
 */
