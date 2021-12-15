NAME			=	phonebook
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -f

SRCS			=	main.cpp\
					phonebook.cpp
OBJS			=	$(SRCS:.cpp=.o)

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@($(CC) $(CFLAGS) $(SRCS))
	@(mv a.out $(NAME))

clean:
	@($(RM) $(OBJS))

fclean: clean
	@($(RM) $(NAME))

re:	fclean all