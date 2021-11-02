#include	"./libtest.h"

void	strchr_test(void)
{
	printf("\n\n\n\n\tSTRCHR TEST\n\n");

	char	arr[] = "Arnolde leopode end ?";
	char	let = 'e';

	printf("\tIN\n--> %s\n--> letter :%c\n\n", arr, let);
	printf("\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));
	
	let = 'z';
	
	printf("\n\n\tIN\n--> %s\n--> letter :%c\n\n", arr, let);
	printf("\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));
}
