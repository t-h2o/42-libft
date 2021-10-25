#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

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

void	ft_int_int(int c)
{
	if (atoi(str) == ft_atoi(str))
		ft_color_prompt(1);
	else 
		ft_color_prompt(0);

	printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", str, ft_atoi(str), atoi(str));
	return ;	
}

void	ft_str_int(char* str)
{
	if (atoi(str) == ft_atoi(str))
		ft_color_prompt(1);
	else 
		ft_color_prompt(0);

	printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", str, ft_atoi(str), atoi(str));
	return ;	
}

void ft_test_atoi(void)
{
	printf("\nfunction atoi\n");

	ft_test_atoi("+-123");
	ft_test_atoi("-+123");
	ft_test_atoi("-123");
	ft_test_atoi("   123");
	ft_test_atoi("0");
	ft_test_atoi("-2147483648");
	ft_test_atoi("2147483647");
	ft_test_atoi("++49");
	ft_test_atoi("+ 49");
	ft_test_atoi("+4 5 9");
	ft_test_atoi("-4 5 9");
	ft_test_atoi("\n\t+--4 5 9");
	ft_test_atoi("-0045 9");
	ft_test_atoi("   -0045 9");
	ft_test_atoi("  -  0045 9");
	ft_test_atoi("\t\t  -  0045 9");
}

int	main(void)
{
	return (0);
}
