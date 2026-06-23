OBJS_DIR	=	obj/


SRCS = main.cpp weapon.cpp human.cpp

OBJS		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

NAME = Humanz

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all:			$(NAME)

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o:	%.cpp | $(OBJS_DIR)
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)
				$(RM) -r $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

all:			$(NAME)

.PHONY:			all clean fclean re norm test
