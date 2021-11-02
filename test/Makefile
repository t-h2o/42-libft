SRCS	= 	main.c \
		is_test.c \
		memset_test.c \
		strlen_test.c \
		strchr_test.c \
		strjoin_test.c \
		strncmp_test.c \
		callfunction.c \
		atoi_test.c \
		split_test.c \


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
			${CC} -o ${NAME} ${OBJS} -L. -lft

all:		${NAME}
			

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libtest.a
			${RM} ${NAME}

re :		fclean	all

lib:		${OBJS}
			ar rc libtest.a *.o
			ranlib libtest.a

log:
		git log --graph --oneline
