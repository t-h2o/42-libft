#include	"libft.h"
#include	<stdio.h>

//int	ft_isalpha(char* str);

void	ft_test_isalpha(void)
{
	printf("%s\t: %d\n", "abc", ft_isalpha("abc"));	
	printf("%s\t: %d\n", "a1c", ft_isalpha("a1c"));	
	printf("%s\t: %d\n", "", ft_isalpha(""));

	return ;	
}

int	main(void)
{
	ft_test_isalpha();
	return (0);
}
