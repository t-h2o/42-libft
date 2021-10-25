SRCS	= isalpha.c 
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
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}
			

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re :		fclean	all

lib:		${OBJS}
			ar rc libft.a *.o
			ranlib libft.a
