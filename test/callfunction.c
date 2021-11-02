#include	"libtest.h"

void	ft_str_sizet(const char** list, size_t (*ft_ptr)(const char*), size_t (*ptr)(const char*))
{
	int	i;

	i = -1;
	while (i++ < 2)
	{
		if ((ft_ptr)(list[i]) == (ptr)(list[i]))
			ft_color_prompt(1);
		else
			ft_color_prompt(0);
		printf("IN : %s,\tOUT : %zu\tEXPECTED %zu\n", list[i], (ft_ptr)(list[i]), (ptr)(list[i]));
	}
	ft_color_prompt(2);
	return ;	

}

void	ft_str_int(const char** list, int (*ft_ptr)(const char*), int (*ptr)(const char*))
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if ((ft_ptr)(list[i]) == (ptr)(list[i]))
			ft_color_prompt(1);
		else 
			ft_color_prompt(0);

		printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", list[i], (ft_ptr)(list[i]), (ptr)(list[i]));
		i++;
		printf("%p\n", &list[i][0]);
	}
	ft_color_prompt(2);
	return ;	
}


void	
	ft_int_int(int (*ft_ptr)(int), int (*ptr)(int))
{
	int	c;

	c = -100;
	while (++c < 600)
	{

		if ((ft_ptr)(c) == (ptr)(c))
			ft_color_prompt(1);
		else
		{	
			ft_color_prompt(0);
			printf("IN : %d,\tOUT : %d\tEXPECTED %d\n", c, (ft_ptr)(c), (ptr)(c));
		}
	}
	ft_color_prompt(2);
	return ;	
}
