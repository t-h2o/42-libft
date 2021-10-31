#include	<stddef.h>

char
	*ft_strnstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)haystack;
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (!needle[j])
				return (ptr);
		}
		else
		{
			j = 0;
			ptr = &((char*)haystack)[i];
		}
		i++;
	}
	return (0);

}
