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

	i = 0;
	j = 0;
	k = 0;
	printf("size : %ld\n", size);
	while (i < nb_wrd)
	{
		printf("%ld < %ld\n", i, nb_wrd);
		j = 0;
		if (s1[k] == c)
			k++;
		printf("%ld <= %ld && %c != %c && %c\n", j, size, s1[k], c, s1[k]);
		while (j <= size && s1[k] != c && s1[k])
		{
			tab[i][j++] = s1[k++];
		}
		tab[i][j] = '\0';
		i++;	
	}


	return (tab);
}
