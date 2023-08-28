SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c\
ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c\
ft_memset.c ft_strlen.c ft_tolower.c ft_atoi.c ft_strdup.c ft_strncmp.c\
ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_calloc.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
SRCS = ${addprefix ${SRC_DIR}, ${SRC}}
OBJ = ${SRCS:.c=.o}
NAME = libft.a

all: ${NAME}

.c.o:
	cc -Wall -Werror -Wextra -std=c99 -I . -c $< -o $@

${NAME}:	${OBJ}
	ar rc ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean:		clean
	rm -f ${NAME}

re:			fclean all
