MEGA_NAME		=	megaphone
CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -f

SRCS			=	megaphone.cpp
OBJS			=	$(SRCS:.cpp=.o)

.PHONY:	all clean fclean re

all: $(MEGA_NAME)

$(MEGA_NAME): $(OBJS)
	@($(CC) $(CFLAGS) $(SRCS))
	@(mv a.out $(MEGA_NAME))

clean:
	@($(RM) $(OBJS))

fclean: clean
	@($(RM) $(MEGA_NAME))

re:	fclean all