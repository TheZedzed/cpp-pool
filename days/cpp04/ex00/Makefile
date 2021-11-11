# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 16:37:02 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/06 21:26:07 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror
NAME		:= Polymorphisme
RM			:= rm -rf

SRCS		+= $(addsuffix .cpp, main Dog Animal Cat WrongCat WrongAnimal)
OBJS		:= $(SRCS:.cpp=.o)

.Phony: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
