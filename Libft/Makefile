# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ployola- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 14:37:14 by ployola-          #+#    #+#              #
#    Updated: 2021/11/17 14:37:16 by ployola-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= $(wildcard *.c)
OBJS			= $(SRCS: .c = .o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

oclean:
				$(RM) .o

.PHONY:			all clean fclean re