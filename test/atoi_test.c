#include	"libtest.h"

void	atoi_test(void)
{
	printf("\n\n\n\n\tATOI TEST\n\n");	

	const char *strings[5] = {\
		"o1ne",\
		"-8954",\
		"**as  +32"\
		"002456"\
		"\0 31"};
	ft_str_int(strings, ft_atoi, atoi);
}
