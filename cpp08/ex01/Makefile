CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp Span.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= ex01

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Span.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all