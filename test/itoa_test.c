#include	"libtest.h"

void	itoa_test(void)
{
	printf("\n\n\n\n\tITOA TEST\n\n");
	
	int	n[5] = {456, -789, 0, MAX_INT, MIN_INT};
	int	i;
	int	j;
	char	*str;

	i = -1;
	while (++i < 5)
	{
		printf("\nn\t\t: %d\n", n[i]);
		str = ft_itoa(n[i]);
		j = -1;
		while (str[++j])
			printf("\tstr[%d]\t: %c\t%d\n", j, str[j], str[j]);
		printf("\tstr[%d]\t: %c\t%d\n", j, str[j], str[j]);
		printf("string\t: %s\n", ft_itoa(n[i]));
	}
}
