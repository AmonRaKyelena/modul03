NAME = ex00

SRCS = main.cpp ClapTrap.cpp

CC = c++

CFLAGC = -Wall -Wextra -Werror -std=c++98 -g

.PHONY : all clean fclean re

all: $(NAME)

$(NAME):$(SRCS)
	$(CC) $(CFLAGC) -o $@ $^

clean:

fclean: clean
	@rm -f $(NAME)
re: fclean all