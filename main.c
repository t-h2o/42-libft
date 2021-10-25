#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>

void	ft_test_atoi(char* str)
{
	printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", str, ft_atoi(str), atoi(str));
	return ;	
}
/*		int max	:	2147483647
 *		int min	:  -2147483648
 */

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
	printf("\nfunction atoi\n");

	ft_test_atoi("123");
	ft_test_atoi("0");
	ft_test_atoi("-2147483648");
	ft_test_atoi("2147483647");
	ft_test_atoi("+49");
	ft_test_atoi("+ 49");
	ft_test_atoi("+4 5 9");
	ft_test_atoi("-4 5 9");
	ft_test_atoi("-0045 9");
	ft_test_atoi("-0045 9");
	return (0);
}
