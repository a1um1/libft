SRC_DIR = 	./

# String
SRC 	= 	str/ft_strchr.c str/ft_strrchr.c str/ft_strlen.c \
			str/ft_strdup.c str/ft_strlcpy.c str/ft_strnstr.c \
			str/ft_substr.c str/ft_strjoin.c str/ft_strtrim.c \
			str/ft_split.c str/ft_strlcat.c str/ft_strmapi.c \
			str/ft_striteri.c str/ft_strncmp.c

# Memory
SRC 	+=	mem/ft_memchr.c mem/ft_memcmp.c mem/ft_memcpy.c \
			mem/ft_memset.c mem/ft_calloc.c mem/ft_bzero.c \
			mem/ft_memmove.c
			
# Character
SRC 	+=	chr/ft_isalnum.c chr/ft_isascii.c chr/ft_isprint.c \
			chr/ft_toupper.c chr/ft_isalpha.c chr/ft_isdigit.c \
			chr/ft_tolower.c 

# File Descriptor
SRC 	+=	fd/ft_putchar_fd.c fd/ft_putstr_fd.c fd/ft_putendl_fd.c \
			fd/ft_putnbr_fd.c

# Utilities
SRC 	+=	utils/ft_atoi.c utils/ft_itoa.c

SRCS	=	${addprefix ${SRC_DIR}, ${SRC}}
OBJ		=	${SRCS:.c=.o}
NAME	=	libft.a

all		:	${NAME}

.c.o	:	libft.h
	cc -Wall -Werror -Wextra -I . -c $< -o $@

${NAME}	:	${OBJ}
	ar -rcs ${NAME} ${OBJ}

clean	:
	rm -f ${OBJ}

fclean	:	clean
	rm -f ${NAME}

re		:	fclean all

.PHONY: all clean fclean re
