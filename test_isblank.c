#include	<ctype.h>
#include	<stdio.h>

int	main()
{
	int i = -1;
	while (++i <= 127)
		if (isblank(i))
			printf("i : %d\n", i);
}
