#include	<stdio.h>

struct	s_list
{	
	int				i;
	char			c;
	struct s_list	*next;
};

void
	display_int_char(struct s_list *begin)
{
	if (!begin)
		return ;
	printf("i %d,\tc %c,\tp %p\n", begin->i, begin->c, begin->next);
	display_int_char(begin->next);
}

int
	main(void)
{
	struct s_list e1;
	struct s_list e2;
	struct s_list *begin;

	begin = &e1;
	e1.next = &e2;
	e2.next = 0;

	e1.i = 42;	
	e1.c = 'p';	
	
	e2.i = -8998;	
	e2.c = 'a';

	display_int_char(begin);

	int i = 0;
	if (i)
		return (0);

	struct s_list e3;
	
	e2.next = &e3;
	e3.next = 0;
	e3.i = 123;
	e3.c = 'Y';


	display_int_char(begin);
		
}
