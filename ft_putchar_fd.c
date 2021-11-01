
#include	"libft.h"
#include	<unistd.h>
	
void
	ft_putchar_fd(int n, int fd)
{
	write(fd, &n, 1);
	return ;
}
