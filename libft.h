#include	<stdlib.h>
#include	<stdio.h>
#include	<ctype.h>
#include	<string.h>


	// string to int

int	ft_atoi(const char* str);


	// string to size_t

size_t	ft_strlen(const char* s);


	// int to int

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);


	// pointer to pointer

void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *b, size_t len);


	// char, int --> pointer on char

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);


	// 2 strings --> int

int	ft_strncmp(const char *s1, const char *s2, size_t n);
