# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmaila <mmaila@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 15:35:00 by mmaila            #+#    #+#              #
#    Updated: 2024/05/30 22:02:00 by mmaila           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP= c++ -std=c++98

FLAGS= -Wall -Werror -Wextra

SRCS= tests.cpp Account.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= Account

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Account.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
