NAME	= libft.a
SRCDIR	= ./
OBJDIR	= ./
SRC		= ${SRCDIR}ft_memset.c \
		  ${SRCDIR}ft_bzero.c \
		  ${SRCDIR}ft_memcpy.c \
		  ${SRCDIR}ft_memccpy.c \
		  ${SRCDIR}ft_memmove.c \
		  ${SRCDIR}ft_strrchr.c \
		  ${SRCDIR}ft_strnstr.c \
		  ${SRCDIR}ft_atoi.c \
		  ${SRCDIR}ft_isdigit.c \
		  ${SRCDIR}ft_memchr.c \
		  ${SRCDIR}ft_strdup.c \
		  ${SRCDIR}ft_strlcat.c \
		  ${SRCDIR}ft_calloc.c \
		  ${SRCDIR}ft_strlen.c
OBJ		= ${patsubst ${SRCDIR}%.c, ${OBJDIR}%.o, ${SRC}}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

${OBJDIR}%.o: ${SRCDIR}%.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all:  ${NAME}

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

so: ${OBJ}
	ar rc libft.so ${OBJ}
	ranlib libft.so