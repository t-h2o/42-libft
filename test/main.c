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
/*
	memcpy_test();

	strlen_test();

//	is_test();	//OK

	memset_test();
	
	strchr_test();
	
	strjoin_test();
	
	strncmp_test();

	itoa_test();
	
//	split_test();
	
//	atoi_test();	//OK
	
	strtrim_test();

	strdup_test();
*/
	lstnew_test_bonus();
	
	lstsize_test();

	lstadd_front_test();

	lstadd_back_test();
	
	lstlast_test();


	return (0);
}
