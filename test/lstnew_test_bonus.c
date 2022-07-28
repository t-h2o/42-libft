#include	"libtest.h"

void
	lstnew_test_bonus(void)
{
	printf("\n\n\n\n\tLSTNEW TEST\n\n");

	t_list	*begin;
	t_list	e1;
	t_list	e2;

	begin = &e1;
	e1.next = &e2;
	e2.next = 0;
	
	e1.content = ft_strdup("element 1");
	e2.content = ft_strdup("block 2");

	display_list(begin);

	char text[] = "123...mic test";
	
	e2.next = ft_lstnew((void *)text);

	display_list(begin);
}
