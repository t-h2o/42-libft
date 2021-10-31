#include	<stddef.h>
	
char
	*strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	i = 0;
	while (n-- && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
