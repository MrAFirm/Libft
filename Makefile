SRCS = ft_isalpha.c  ft_isdigit.c ft_isalnum.c \

Library = libft

Compiler	= gcc

CFlags	= -Wall -Wextra -Werror

OUT	= $(Library).a

CFILES	= $(SRCS: % = % .c)

OFILES	= $(SRCS: % = % .o)

NAME	= $(OUT)

$(NAME):
	$(Compiler) $(CFlags) -c $(CFILES) -I./
	ar -rc $(OUT) $(OFILES)

all:	$(NAME)

clean:
	rm -rf $(NAME)
	rm -rf $(OFILES)

fclean:
	rm -rf $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re
