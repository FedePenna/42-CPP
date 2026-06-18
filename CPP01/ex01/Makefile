NAME = Zombie

SRCS = 	main.cpp \
		Zombie.cpp \


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
	rm -f $(NAME)	
fclean: clean
	rm -f $(NAME)
re: fclean all