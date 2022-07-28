#include	"libtest.h"

void	memcpy_test(void)
{
	printf("\n\n\n\n\tMEMCPY TEST\n\n");

	char	d1[5];
	
	char	s1[5] = "12345";

	ft_memcpy(d1, s1, 3);

	printf("d1 : %s", d1);
}
