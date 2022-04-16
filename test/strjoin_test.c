#include	"libtest.h"

void	strjoin_test(void)
{
	printf("\n\n\n\n\tSTRJOIN TEST\n\n");

	char	s1[] = "KeyWord one and...-";
	char	s2[] = "->... bruh";
	char	*str;

	str = ft_strjoin(s1, s2);
	printf("s1 : %s\ns2 : %s\nstr : %s\n", s1, s2, str);	
	free(str);	

	char	s3[] = "";
	char	s4[] = "h";
	str = ft_strjoin(s3, s4);
	printf("\ns1\t: %s\ns2\t: %s\nstr\t: %s\n", s3, s4, str);	
	free(str);
}
