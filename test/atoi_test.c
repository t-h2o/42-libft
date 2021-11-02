#include	"libtest.h"

void	atoi_test(void)
{
	printf("\n\n\n\n\tATOI TEST\n\n");	

	const char *strings[] = {\
		"o1ne",\
		"-8954",\
		"**as  +32"\
		"002456"};
	ft_str_int(strings, ft_atoi, atoi);
}
