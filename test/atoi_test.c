#include	"libtest.h"
#define		ARR		11
void	atoi_test(void)
{
	printf("\n\n\n\n\tATOI TEST\n\n");	




	const char *strings[ARR] = {
		"1",
		"a1",
		"--1",
		"++1",
		"+1",
		"-1",
		"0",
		"+42Lozz",
		"+101",
		"2147483647",
		"-2147483648",
	};
	
//	ft_str_int(strings, ft_atoi, atoi);

	int i = -1;
	while (++i < ARR)
		printf("%d.)\t%s\nft\t%d\natoi\t%d\n\n", i, strings[i], ft_atoi(strings[i]), atoi(strings[i]));

}
