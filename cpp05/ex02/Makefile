NAME			=	execform
CC				=	c++
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -f

SRCS			=	main.cpp\
					Bureaucrat.cpp\
					Form.cpp\
					ShrubberyCreationForm.cpp\
					RobotomyRequestForm.cpp\
					PresidentialPardonForm.cpp
					
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