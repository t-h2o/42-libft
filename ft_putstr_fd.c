
#include	"libft.h"
#include	<unistd.h>

void
	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	return ;
}
