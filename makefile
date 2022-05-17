NAME	= libft.a

#SRC	= main.c ft_calloc.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strjoin.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c

SRC		= ft_*.c

OBJ		= $(SRC:.c=.o)

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:	
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -c $(SRC)
				ar rc $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
