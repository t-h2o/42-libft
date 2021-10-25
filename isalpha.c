int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[++i])
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'A') || str[i] > 'z')
			return (0);
	return (1);
}

/*	return 0
 *
 *	A 65
 *	Z 90
 *	
 *	return 0
 *
 *	a 97
 *	z 122
 *
 *	return 0
 */
