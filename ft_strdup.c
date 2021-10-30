#include	<stddef.h>
#include	<stdlib.h>
#include	"libft.h"

char
	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*str;

	s_len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (s_len + 1));
	ft_strlcpy(str, s, s_len);
	return (str);
	
}	
