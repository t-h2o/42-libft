#include	"./libtest.h"

void
	lstadd_front_test_bonus(void)
{
	t_list	*begin;
	t_list	e1;
	t_list	e2;
	t_list	e3;

	begin = &e1;
	e1.next = &e2;
	e2.next = &e3;
	e3.next = 0;

	e1.content = (void *)ft_strdup("e1 : oefn");
	e2.content = (void *)ft_strdup("e2 : laekn");
	e3.content = (void *)ft_strdup("e3 : poopop");
	
	display_list(begin);

	ft_lstadd_front((t_list **)begin, &e3);	
	
	display_list(begin);

	return ;
}
