SRCS	= 	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c \
			ft_memset.c \
			ft_memchr.c \
			ft_bzero.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_substr.c \
			ft_striteri.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_strjoin.c \
			ft_atoi.c
# source files

OBJS	= ${SRCS:.c=.o}
# transform c file to o file

NAME	= program
# name of binary file

CC		= gcc
# tool for compilation

FLAGS	= -Wall -Wextra -Werror
# option compilation

RM		= rm -f
# force delete files



.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	lib
			${CC} -o ${NAME} main.c -L. -lft

all:		${NAME}
			

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libft.a
			${RM} ${NAME}

re :		fclean	all

lib:		${OBJS}
			ar rc libft.a *.o
			ranlib libft.a
