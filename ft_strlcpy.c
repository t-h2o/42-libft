
#include	"libft.h"
#include	<stddef.h>
	
char
	*ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	while (n-- && src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
