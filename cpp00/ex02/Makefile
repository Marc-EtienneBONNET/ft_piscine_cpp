# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 13:05:15 by mbonnet           #+#    #+#              #
#    Updated: 2022/02/10 15:55:29 by mbonnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	execute

SRCS			=	srcs/test.cpp\
					constructeur/Account.cpp\

OBJS			=	${addprefix ,${SRCS:.cpp=.o}}

HEAD			=	-I includes/

CC				=	clang++ 

CFLAGS			=	-std=c++98 -Wall -Werror -Wextra -g

.cpp.o			:
					${CC} ${CFLAGS} ${HEAD}  -c $< -o ${<:.cpp=.o} 

$(NAME)			:	${OBJS}
					${CC} ${CFLAGS} ${OBJS}  -o ${NAME} 

all				:	${NAME}

clean			:
					rm -rf ${OBJS}

fclean			:	clean
					rm -rf ${NAME}

re				:	fclean all

.PHONY			:	all clean fclean re