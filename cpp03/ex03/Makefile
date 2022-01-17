NAME			=	diamondtrap
CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror -Wshadow -Wno-shadow
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -f

SRCS			=	main.cpp\
					ClapTrap.cpp\
					ScavTrap.cpp\
					FragTrap.cpp\
					DiamondTrap.cpp
					
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