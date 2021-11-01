#include	<stdlib.h>
#include	<stddef.h>
#include	"libft.h"

char
	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i <= len)
	{
		str[i] = f(i, s[i]);
		i ++;
	}
	return (str);
}
