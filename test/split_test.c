#include	"libtest.h"


void
	display_tab(char **tab)
{	
	size_t	i;	
	size_t	j;
	
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			printf("%c\t%d\t:tab[%ld][%ld]\t%p\t%ld\n", tab[i][j], tab[i][j], i, j, &tab[i][j], &tab[i][j] - (char *)tab);	
			j++;
		}
		printf("%c\t%d\t:tab[%ld][%ld]\t%p\t%ld\n", tab[i][j], tab[i][j], i, j, &tab[i][j], &tab[i][j] - (char *)tab);	
		i++;
		printf("tab[%ld] : %p\n", i, tab[i]);	
	}
	return ;
}



void	split_test(void)
{
	printf("\n\n\n\n\tSPLIT TEST\n\n");
	
	char	**tab;
	char	c = '.';
	const char	str[] = "12345.boire de l'eau. my name is to";

	printf("str\t: %s\nc\t: %c\n\n", str, c);

	tab = ft_split((const char *)str, c);

	display_tab(tab);
	 
}

