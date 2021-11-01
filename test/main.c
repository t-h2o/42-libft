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
	const char *strings[] = {"o1ne","-8954","**as  +32"};

	is_test();

	strlen_test();

	printf("\n\n\tMEMSET TEST\n\n");	
	char	ptrVoid[] = "AbCd5";
	void	*add;
	printf("string\n--> %s\t%p \n\n", ptrVoid, ptrVoid);
	add = memset(ptrVoid, '1', 2);
	printf("memset\n--> %s\t%p\n\n", ptrVoid, add);
	
	printf("string\n--> %s\t%p\n\n", ptrVoid, add);
	add = ft_memset(ptrVoid, '@', 2);
	printf("ft_memset\n--> %s\t%p\n\n", ptrVoid, add);
	
	printf("string\n--> %s\t%p\n\n", ptrVoid, add);
	add = ft_bzero(ptrVoid, 2);
	printf("ft_bzero\n--> %s\t%p\n\n", ptrVoid, add);
	
	ft_putnbr_fd(-123456, 1);
	
	printf("\nstrchr\n");	
	
	char	arr[] = "Arnolde leopode end ?";
	char	let = 'e';
	printf("\n\n\tIN\n--> %s\n--> letter :%c\n\n", arr, let);
	
	printf("\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));
	
	let = 'z';
	
	printf("\n\n\tIN\n--> %s\n--> letter :%c\n\n\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", arr, let, strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));

	
	char s1[] = "Salurations";
	char s2[] = "Salutations";
	
	printf("s1 : %s\ns2 : %s\nstrncmp : %d\nft_strncmp : %d", s1, s2, strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));


	printf("\natoi\n");	
	ft_str_int(strings, ft_atoi, atoi);
	
	return (0);
}
