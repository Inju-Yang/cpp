# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inyang <inyang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 16:28:12 by inyang            #+#    #+#              #
#    Updated: 2022/01/12 04:14:27 by inyang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	karenFilter
CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
AR				=	ar
ARFLAGS			=	rcs
RM				=	rm -f

SRCS			=	main.cpp\
					Karen.cpp
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