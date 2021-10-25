#include	"libft.h"
#include	<stdio.h>

void	ft_test_isalpha(void)
{
	printf("\nis alpha\n%c\t: %d expected : 1\n", 'a', ft_isalpha('a'));	
	printf("%c\t: %d expected : 0\n\n", '1', ft_isalpha('1'));	

	return ;	
}

void	ft_test_isdigit(void)
{
	printf("\nis digit\n%c\t: %d expected : 0\n", 'a', ft_isdigit('a'));	
	printf("%c\t: %d expected : 1\n", '1', ft_isdigit('1'));	

	return ;	
}
int	main(void)
{
	ft_test_isalpha();
	ft_test_isdigit();
	return (0);
}
