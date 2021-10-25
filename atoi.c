int	ft_atoi(const char *str)
{
	int	nbr;
	int	i;
	int	ten;
	int lim;

	lim = 0;	
	i = 0;
	ten = 1;	
	if (str[i] == '-')
		ten = -1;
	if (str[i] == '-')
		lim++;

	while (str[i])
		i++;
	nbr = 0;
	while (--i >= lim)
	{
		nbr += (str[i] - '0') * ten;
		ten *= 10;
	}
	return (nbr);
}
