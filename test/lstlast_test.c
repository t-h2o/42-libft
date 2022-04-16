#include	"./libtest.h"

void
	lstlast_test(void)
{
	printf("\n\n\n\n\tLSTLAST TEST\n\n");
	t_list	*s;
	t_list	e1;
	t_list	e2;

	s = &e1;
	e1.next = &e2;
	e2.next = 0;

	e1.content = ft_strdup("elemenrt1");
	e2.content = ft_strdup("blovkk");

	display_list(s);

	printf("\nthe last is at %p", ft_lstlast(s));

	return ;
}
