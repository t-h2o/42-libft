#include	"libtest.h"
	
void
	strdup_test(void)
{
	printf("\n\n\n\n\tSTRDUP TEST\n\n");

	const char	s[] = "Duplik me please...";
	char		*p;
	p = ft_strdup(s);
	printf("\ns\t:%s\np\t:%s\n", s, p);

}
