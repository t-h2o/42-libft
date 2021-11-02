#include	"libtest.h"

void	itoa_test(void)
{
	printf("\n\n\n\n\tITOA TEST\n\n");
	
	int	n[7] = {-1, -56789, 0, 1, MAX_INT, MIN_INT};
	int	i;
//	int	j;
	char	*str;

	i = -1;
	while (++i < 7)
	{
		printf("\n\tNOMBRE\t: %d\n", n[i]);
		str = ft_itoa(n[i]);
//		j = -1;
//		while (str[++j])
//			printf("\tstr[%d]\t: %c\t%d\n", j, str[j], str[j]);
//		printf("\tstr[%d]\t: %c\t%d\n", j, str[j], str[j]);
		printf("\t\t> %s\n", ft_itoa(n[i]));
	}
}
