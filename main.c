#include	"libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<ctype.h>
#include	<string.h>
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

void	ft_int_int(int (*ft_ptr)(int), int (*ptr)(int))
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

	i = -1;
	while (i++ < 2)
	{
		if (atoi(list[i]) == ft_atoi(list[i]))
			ft_color_prompt(1);
		else 
			ft_color_prompt(0);

		printf("IN : %s,\tOUT : %d\tEXPECTED %d\n", list[i], (ft_ptr)(list[i]), (ptr)(list[i]));
	}
	ft_color_prompt(2);
	return ;	
}


int	main(void)
{	
	const char *strings[] = {"o1ne","-8954","**as  +32"};

	printf("\nmemset\n");	
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

	printf("\n\n\tIN\n--> %s\n--> letter :%c\n\n\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", arr, let, strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));
	
	let = 'z';
	
	printf("\n\n\tIN\n--> %s\n--> letter :%c\n\n\tOUT\nstrchr\t\t-->%s\nft_strchr\t-->%s\nstrrchr\t\t-->%s\nft_strrchr\t-->%s\n", arr, let, strchr(arr, let), ft_strchr(arr, let), strrchr(arr, let), ft_strrchr(arr, let));

	
	char s1[] = "Salurations";
	char s2[] = "Salutations";
	
	printf("s1 : %s\ns2 : %s\nstrncmp : %d\nft_strncmp : %d", s1, s2, strncmp(s1, s2, 9), ft_strncmp(s1, s2, 9));


	printf("\natoi\n");	
	ft_str_int(strings, ft_atoi, atoi);
	
	printf("\nstrlen\n");	
	ft_str_sizet(strings, ft_strlen, strlen);
	
	return (0);
}


/*	
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
*/	
