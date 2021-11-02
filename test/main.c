#include	"./libtest.h"

void	ft_color_prompt(int col)
{
	switch (col)
	{
		case 0:
			printf("\033[1;31m");	// red
			break;
		case 1:
			printf("\033[0;32m");	// green
			break;
		case 2:
			printf("\033[0;37m");	// white 
			break;
	}	
}



int	main(void)
{	

//	is_test();

	strlen_test();

	memset_test();

	
	ft_putnbr_fd(-123456, 1);
	
	
	strchr_test();
	
	strjoin_test();
	
	strncmp_test();

//	atoi_test();
	
	itoa_test();
	
	split_test();
	
	return (0);
}
