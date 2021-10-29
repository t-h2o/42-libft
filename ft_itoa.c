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
		return (1);

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
		s[i] = s[i] / (ten / 10) + '0';
		ten *= 10;
		printf("\ts[%d] --> %c\n", i, s[i]);
	}
	
	return (s);
}
/*	201 % 10 = R 1 
 *	1 / 1 = 1
 *	
 *	201 % 100 = 2
 *	1 / 10 = 0
 *
 *	201 % 1000 = 201
 *	201 / 100 = 2
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

int
	main(void)
{
	int	n = -20103;
	printf("n : %d\nn char %d\n", n, nb_char(n));
	printf("--> %s\n", ft_itoa(n));
	
	n = -123;
	printf("\nn : %d\nn char %d\n", n, nb_char(n));
	printf("--> %s\n", ft_itoa(n));
	
	n = 0;
	printf("\nn : %d\nn char %d\n", n, nb_char(n));
	printf("--> %s\n", ft_itoa(n));
	
	n = 20111;
	printf("\nn : %d\nn char %d\n", n, nb_char(n));
	printf("--> %s\n", ft_itoa(n));
	return (0);
}
