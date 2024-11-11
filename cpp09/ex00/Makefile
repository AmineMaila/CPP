CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp BitcoinExchange.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= btc

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./BitcoinExchange.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all