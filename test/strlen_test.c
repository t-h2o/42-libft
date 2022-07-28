#include	"./libtest.h"

void
	strlen_test(void)
{
	const char *strings[] = {"o1ne","-8954","**as  +32"};	
	
	printf("\n\n\n\n\tSTRLEN TEST\n\n");	
	ft_str_sizet(strings, ft_strlen, strlen);
}
