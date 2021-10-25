#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<ctype.h>

void	ft_color_prompt(int col)
{
	switch (col)
	{
		case 0:
			// red
			printf("\033[1;31m");
			break;
		case 1:
			// green 
			printf("\033[0;32m");
			break;
	}	
}

void	ft_int_int(int c, int (*ft_ptr)(int), int (*ptr)(int))
{
	if (isalnum(c) == ft_isalnum(c))
		ft_color_prompt(1);
	else
	{	
		ft_color_prompt(0);
		printf("IN : %d,\tOUT : %d\tEXPECTED %d\n", c, (ft_ptr)(c), (ptr)(c));
	}

	return ;	
}

void	ft_str_sizet(char* str, size_t (*ft_ptr)(const char*), size_t (*ptr)(const char*))
{

}

void	ft_str_int(char* str, int (*ft_ptr)(const char*), int (*ptr)(const char*))
{
	if (atoi(str) == ft_atoi(str))
		ft_color_prompt(1);
	else 
		ft_color_prompt(0);

	printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", str, (ft_ptr)(str), (ptr)(str));
	return ;	
}

void	ft_test_isalnum(void)
{
	int	i;

	i = -1;
	while (++i < 255)
		ft_int_int(i, ft_isalnum, isalnum);
	return ;
}


void ft_test_atoi(void)
{
	printf("\nfunction atoi\n");

	ft_str_int("+-123", ft_atoi, atoi);
}

void ft_test_strlen(void)
{
	printf("\nfunction strlen\n");

	ft_str_sizet("8 char", ft_strlen, strlen);	
}

int	main(void)
{	
	ft_test_atoi();
	ft_test_strlen();
	ft_test_isalnum();
	return (0);
}
