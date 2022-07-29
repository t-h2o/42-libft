DIR_OBJ	=	./objs

HEADER	=	libft.h

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

AR		=	ar rc


#	Headers

INCD	=	headers
INCS	=	$(INCD)/libft.h


# SOURCES

SRCD	=	srcs
SRCS	=	ft_isalpha.c
SRCS	+=	ft_isdigit.c
SRCS	+=	ft_isalnum.c
SRCS	+=	ft_isascii.c
SRCS	+=	ft_isprint.c
SRCS	+=	ft_strlen.c
SRCS	+=	ft_memset.c
SRCS	+=	ft_bzero.c
SRCS	+=	ft_memcpy.c
SRCS	+=	ft_memmove.c
SRCS	+=	ft_strlcpy.c
SRCS	+=	ft_strlcat.c
SRCS	+=	ft_toupper.c
SRCS	+=	ft_tolower.c
SRCS	+=	ft_strchr.c
SRCS	+=	ft_strrchr.c
SRCS	+=	ft_strncmp.c
SRCS	+=	ft_memchr.c
SRCS	+=	ft_memcmp.c
SRCS	+=	ft_strnstr.c
SRCS	+=	ft_atoi.c
SRCS	+=	ft_calloc.c
SRCS	+=	ft_strdup.c
SRCS	+=	ft_substr.c
SRCS	+=	ft_strjoin.c
SRCS	+=	ft_strtrim.c
SRCS	+=	ft_split.c
SRCS	+=	ft_itoa.c
SRCS	+=	ft_strmapi.c
SRCS	+=	ft_striteri.c
SRCS	+=	ft_putchar_fd.c
SRCS	+=	ft_putstr_fd.c
SRCS	+=	ft_putendl_fd.c
SRCS	+=	ft_putnbr_fd.c


# OBJETS

OBJD	=	objs
OBJS	=	$(addprefix $(OBJD)/, $(notdir $(SRCS:.c=.o)))


vpath %.c $(SRCD)

RM		=	rm -f


all:		${NAME}


$(OBJD)/%.o : %.c | $(OBJD)
	@echo Create the objets from the source code...
	$(CC) $(CFLAGS) -I $(INCD) -o $@ -c $^

${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS} 
	ranlib ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${OBJS_BONUS}

fclean:		clean
	${RM} ${NAME}

re:			fclean	all

${DIR_OBJ} :
	@mkdir -p ${DIR_OBJ}

bonus:		${OBJS} ${OBJS_BONUS}
	${AR} ${NAME} ${OBJS} ${OBJS_BONUS}
	ranlib ${NAME}

log:
	git log --graph --oneline

norm:
	norminette ${SRCS}
	norminette -RCheckDefine ${HEADER}

.PHONY: all clean fclean re bonus so
