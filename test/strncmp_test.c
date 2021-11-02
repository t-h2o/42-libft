#include	"libtest.h"

void	strncmp_test(void)
{
	printf("\n\n\n\n\tSTRNCMP TEST\n\n");

	char s1[] = "Salurations";
	char s2[] = "Salutations";
	
	printf("s1 : %s\ns2 : %s\nstrncmp : %d\nft_strncmp : %d", s1, s2, strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));
}
