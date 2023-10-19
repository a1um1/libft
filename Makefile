SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c
SRC += ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c
SRC += ft_memset.c ft_strlen.c ft_tolower.c ft_atoi.c ft_strdup.c ft_strncmp.c
SRC += ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c ft_calloc.c
SRC += ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c
SRC += ft_strmapi.c ft_striteri.c ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c
SRCS = ${addprefix ${SRC_DIR}, ${SRC}}
OBJ = ${SRCS:.c=.o}
NAME = libft.a

all: ${NAME}

.c.o: libft.h
	cc -Wall -Werror -Wextra -I . -c $< -o $@

${NAME}:	${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -f ${OBJ}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re SRC
