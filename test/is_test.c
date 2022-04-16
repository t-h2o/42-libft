#include	"./libtest.h"
#include	"../libft.h"

void	is_test(void)
{
	printf("\n\n\tIS TEST\n\n");

	printf("\nisalnum\n");	
	ft_int_int(ft_isalnum, isalnum);

	printf("\ntoupper\n");	
	ft_int_int(ft_toupper, toupper);

	printf("\ntolower\n");	
	ft_int_int(ft_tolower, tolower);

	printf("\nisalpha\n");	
	ft_int_int(ft_isalpha, isalpha);

	printf("\nisdigit\n");	
	ft_int_int(ft_isdigit, isdigit);
	
	printf("\nisascii\n");	
	ft_int_int(ft_isascii, isascii);
	
	printf("\nisprint\n");	
	ft_int_int(ft_isprint, isprint);
}
