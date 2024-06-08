Library	= libft

SRCS = ft_isalpha	\
	   ft_isdigit	\
	   ft_isalnum	\
	   ft_isascii	\
	   ft_isdigit	\
	   ft_isprint	\
	   ft_memcpy	\
	   ft_memset	\
	   ft_strchr	\
	   ft_strlcpy	\
	   ft_strlen	\
	   ft_bzero		\
	   ft_toupper	\
	   ft_tolower	\

Compiler	= gcc

CFlags	= -Wall -Wextra -Werror

OUT	= $(Library).a

CFILES	= $(SRCS:%=%.c)

OFILES	= $(SRCS:%=%.o)

NAME	= $(OUT)

$(NAME):
	$(Compiler) $(CFlags) -c $(CFILES) -I./
	ar -rc $(OUT) $(OFILES)

all:	$(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean:
	rm -f $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re
