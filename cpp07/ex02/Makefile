CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= array

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Array.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all