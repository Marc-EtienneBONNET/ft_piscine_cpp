# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 13:05:15 by mbonnet           #+#    #+#              #
#    Updated: 2022/03/09 16:52:57 by mbonnet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	executable

SRCS			=	srcs/main.cpp\
					srcs/Bureaucrat.cpp\
					srcs/AForm.cpp\
					srcs/ShrubberyCreationForm.cpp\
					srcs/RobotomyRequestForm.cpp\
					srcs/PresidentialPardonForm.cpp\
					srcs/Intern.cpp\

OBJS			=	${addprefix ,${SRCS:.cpp=.o}}

HEAD			=	-I includes/

CC				=	c++ 

CFLAGS			=	-std=c++98 -Wall -Wextra -Werror

.cpp.o			:
					${CC} ${CFLAGS} ${HEAD}  -c $< -o ${<:.cpp=.o} 

$(NAME)			:	${OBJS}
					${CC} ${CFLAGS} ${OBJS}  -o ${NAME} 

all				:	${NAME}

clean			:
					rm -rf ${OBJS}

fclean			:	clean
					rm -rf ${NAME}
					rm -rf *_shrubbery

re				:	fclean all

.PHONY			:	all clean fclean re