NAME		= libft.a

SRC			= ft_isalnum.c\
			  ft_isprint.c\
			  ft_memcpy.c\
			  ft_putendl_fd.c\
			  ft_strchr.c\
			  ft_strlcat.c\
			  ft_strncmp.c\
			  ft_substr.c\
			  ft_atoi.c\
			  ft_isalpha.c\
			  ft_itoa.c\
			  ft_memmove.c\
			  ft_putnbr_fd.c\
			  ft_strdup.c\
			  ft_strlcpy.c\
			  ft_strnstr.c\
			  ft_tolower.c\
			  ft_bzero.c\
			  ft_isascii.c\
			  ft_memchr.c\
			  ft_memset.c\
			  ft_putstr_fd.c\
			  ft_striteri.c\
			  ft_strlen.c\
			  ft_strrchr.c\
			  ft_toupper.c\
			  ft_calloc.c\
			  ft_isdigit.c\
			  ft_memcmp.c\
			  ft_putchar_fd.c\
			  ft_split.c\
			  ft_strjoin.c\
			  ft_strmapi.c\
			  ft_strtrim.c

SRC_B		= ft_lstnew.c\
			  ft_lstadd_front.c\
			  ft_lstsize.c\
			  ft_lstadd_back.c\
			  ft_lstlast.c\
			  ft_lstdelone.c\
			  ft_lstclear.c\
			  ft_lstiter.c\
			  ft_lstmap.c


OBJ_B			= $(SRC_B:.c=.o)

OBJ			= $(SRC:.c=.o)

CC			= cc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -c $(SRC)
				ar rc $(NAME) $(OBJ)

bonus:		$(OBJ_B)
			$(CC) $(CFLAGS) -c $(SRC_B)
			ar rc $(NAME) $(OBJ) $(OBJ_B)

all:		$(NAME)

clean:
			$(RM) $(OBJ)
			$(RM) $(OBJ_B)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
