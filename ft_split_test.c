#include	<stdlib.h>
#include	<stdio.h>

char
	**ft_split(const char *s1, int c);

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



int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	char	c = argv[2][0];
	char	**tab;

	printf("argc\t: %d\ns1\t: %s\nc\t: %c\n\n", argc, argv[1], c);

	tab = ft_split((const char *)argv[1], c);

	display_tab(tab);
	return (0);
}

