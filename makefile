

all:
	cc -Wall -Wextra -Werror ft_*.c main.c libft.h

run:
	./a.out

clean:
	rm a.out
