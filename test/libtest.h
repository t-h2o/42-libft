#ifndef LIBTEST_H
 #define LIBTEST_H

#include	"../libft.h"
#include	<stdlib.h>
#include	<stdio.h>
#include	<ctype.h>
#include	<string.h>
#define		MAX_INT		2147483647
#define		MIN_INT		-2147483648

void	ft_int_int(int (*ft_ptr)(int), int (*ptr)(int));
void	ft_str_int(const char** list, int (*ft_ptr)(const char*), int (*ptr)(const char*));
void	ft_str_sizet(const char** list, size_t (*ft_ptr)(const char*), size_t (*ptr)(const char*));

void	ft_color_prompt(int col);

void	is_test(void);
void	memset_test(void);
void	strlen_test(void);
void	strchr_test(void);
void	strncmp_test(void);
void	atoi_test(void);
void	itoa_test(void);
void	split_test(void);
void	strjoin_test(void);
#endif
