#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

int
	nb_char(int n)
{
	int	nb;
	int	ten;

	ten = 1;
	nb = 0;
	if (n < 0)
		nb++;
	while (n >= ten || -n >= ten)
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
	int	ten;

	c = nb_char(n);
	s = (char *)malloc(sizeof(char) * (c + 1));	
	if (!s)
		return (0);
	s[c] = '\0';
	
	if (n < 0)
		s[0] = '-';
	if (n < 0)
		n = -n;
	i = c;
	ten = 10;
	while (ten / 10 <= n)
	{
		s[--i] = n % ten;
		printf("%d // %d = %d", n, ten, s[i]);
		printf("\ts[%d] = %d\n", i, s[i]);
		printf("%d / (%d / 10) + 48", s[i], ten);
		s[i] = s[i] / (ten / 10) + '0';
		printf("\ts[%d] = %c\n", i, s[i]);
		ten *= 10;
	}
	
	return (s);
}

/*	
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
