
#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

void	display_tab(char **tab);

size_t
	give_word(const char *s1, char c)
{
	size_t	nb_wrd;
	size_t	i;

	nb_wrd = 1;
	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			nb_wrd++;
	return (nb_wrd);
}

size_t
	give_size(char	**tab, const char *s1, char c)
{
	size_t	i;
	size_t	j;
	size_t	wrd;
	size_t	size;
	
	(void)tab;

	i = 0;
	j = 0;
	size = 0;
	wrd = 0;
	while (s1[i])
	{
		if (s1[i++] == c)
		{
			printf("word %ld len : %ld\n", wrd, j+1);
			//tab[wrd++] = (char *)malloc(sizeof(char) * (j+1));
			if (size < j)
				size = j;
			j = 0;
		}
		else
			j++;	
	}
	return (size);
}

char
	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nb_wrd;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	k;

	nb_wrd = give_word(s, c);
	printf("word number : %ld\n\n", nb_wrd);	
	tab = (char **)malloc(sizeof(char *) * nb_wrd);

	display_tab(tab);
	
	size = give_size(tab, s, c);


	i = 0;
	while (i < nb_wrd)
	{
		tab[i] = (char *)malloc(sizeof(char) * (1 + size));
		if (!&tab[i])
			return (0);
		i++;
	}
	
	i = 0;
	j = 0;
	k = 0;
	while (i < nb_wrd)
	{
		j = 0;
		if (s1[k] == c)
			k++;
		while (j <= size && s[k] != c && s[k])
		{
			tab[i][j++] = s[k++];
		}
		tab[i][j] = '\0';
		i++;	
	}


	return (tab);
}
