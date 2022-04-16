#include	"./libtest.h"

void
	lstadd_front_test()
{
	printf("\n\n\n\n\tLSTADD FRONT TEST\n\n");

	t_list	*s;
	t_list	e1;
	t_list	e2;

	s = &e1;
	e1.next = &e2;
	e2.next = 0;

	e1.content = ft_strdup("element 1");
	e2.content = ft_strdup("block 2");

	display_list(s);

	t_list	e3;
	e3.content = ft_strdup("New one... 3");

	printf("\ns\t%p\t&s\t%p\n", s, &s);
	printf("&e3\t%p\n\n", &e3);
	ft_lstadd_front(&s, &e3); 

	display_list(s);

}
