SRCS	= 	main.c is_test.c memset_test.c memcpy_test.c \
			strlen_test.c strchr_test.c strjoin_test.c \
			strncmp_test.c callfunction.c atoi_test.c \
			itoa_test.c split_test.c strtrim_test.c \
			strdup_test.c lstnew_test_bonus.c

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

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} -L. -lft

all:		${NAME}
			

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libtest.a
			${RM} ${NAME}

re :		fclean	all


log:
		git log --graph --oneline
