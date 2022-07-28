#include	"./libtest.h"

void
	lstsize_test(void)
{
	printf("\n\n\n\n\tLSTSIZE TEST\n\n");
	t_list	*s;
	t_list	e1;
	t_list	e2;

	s = &e1;
	e1.next = &e2;
	e2.next = 0;

	e1.content = ft_strdup("elemenrt1");
	e2.content = ft_strdup("blovkk");
	
	display_list(s);

	printf("\nthere is %d struct\n", ft_lstsize(s));

	return ;
}
