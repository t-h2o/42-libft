#define		WRD	3
#define		SIZE	5
#include	<stdio.h>

int	main(void)
{
	char	tab[WRD][SIZE];
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (i < WRD)
	{
		printf("adress tab[%ld][%ld]\t%p\t%ld\n", i, j, &tab[i][j], tab[i] - tab[0]);	
		i++;
	}
}
