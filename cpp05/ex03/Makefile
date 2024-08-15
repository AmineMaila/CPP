CPP= c++

FLAGS= -Wall -Werror -Wextra

SRCS= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS= $(SRCS:.cpp=.o)

NAME= Intern

all : $(NAME)

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp ./Bureaucrat.hpp ./AForm.hpp ./ShrubberyCreationForm.hpp ./RobotomyRequestForm.hpp ./PresidentialPardonForm.hpp ./Intern.hpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all