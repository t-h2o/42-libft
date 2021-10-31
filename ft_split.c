#include	<stdlib.h>
#include	<stdio.h>

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
	give_size(const char *s1, char c)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 0;
	while (s1[i])
	{
		if (s1[i++] == c)
		{
			if (size < j)
				size = j;
			j = 0;
		}
		else
			j++;	
	}
	return (size);
}

void
	display_tab(size_t nb_wrd, size_t size, char **tab)
{	
	size_t	i;	
	size_t	j;
	
	i = 0;
	while (i <= nb_wrd)
	{
		j = 0;
		while (j < size)
		{
			printf("%d\t:tab[%ld][%ld]\t%p\t%ld\n", tab[i][j], i, j, &tab[i][j], &tab[i][j] - (char *)tab);	
			j++;
		}
		i++;
		printf("\n");	
	}
	return ;
}

char
	**ft_split(const char *s1, char c)
{
	char	**tab;
	size_t	nb_wrd;
	size_t	size;
	size_t	i;
	size_t	j;
	size_t	k;

	nb_wrd = give_word(s1, c);
	printf("nb word\t: %ld\n", nb_wrd);

	size = give_size(s1, c);
	printf("size\t: %ld\n", size);

	tab = (char **)malloc(sizeof(char *) * nb_wrd);
	printf("tab %p\n\n", tab);

	i = 0;
	while (i < nb_wrd)
	{
		tab[i] = (char *)malloc(sizeof(char) * (1 + size));
		if (!&tab[i])
			return (0);
		i++;
	}
	
	tab[0][5] = 'a';
	display_tab(nb_wrd, size, tab);

	i = 0;
	j = 0;
	k = 0;
	while (i <= nb_wrd)
	{
		printf("s1[%ld]\t: %c]n", k, s1[k]);
		j = 0;
		while (j <= size && s1[k] != c && s1[k])
		{
			printf("s1[%ld]\t: %c]n", k, s1[k]);
			tab[i][j++] = s1[k++];
		}
		tab[i][j] = '\0';
		i++;	
	}


	return (tab);
}


int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	char c = argv[2][0];

	printf("argc\t: %d\ns1\t: %s\nc\t: %c\n\n", argc, argv[1], c);

	ft_split((const char *)argv[1], c);

	return (0);
}
