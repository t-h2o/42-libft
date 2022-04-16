#include	"libtest.h"

void	strtrim_test(void)
{
	printf("\n\n\n\n\tSTRTRIM TEST\n\n");

	const char	s1[] = "Boie Bois de l'eau...?";
	const char	set[] = "osasdasdasdasd";
	size_t		i;
	char		*ptr;

	printf("\ns1\t: %s\nset\t: %s\n", s1, set);
	ptr = ft_strtrim(s1, set);
	printf("ptr\t: %s\n", ptr);
	
	i = 0;
	while (ptr[i])
	{
		printf("ptr[%ld]\t:%d\n", i, ptr[i]);
		i++;
	}
	printf("ptr[%ld]\t:%d\n", i, ptr[i]);
}
