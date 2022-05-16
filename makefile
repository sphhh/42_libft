NAME = libft.a

SRCS = main.c ft_*.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	cc -Wall -Wextra -Werror -o ${NAME} ${SRCS}

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all
