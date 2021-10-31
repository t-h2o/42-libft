#include	<stdlib.h>

void
	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	if (!nmemb || !size)
		return (0);
	ptr = malloc(nmemb * size);
	return (ptr);
}
