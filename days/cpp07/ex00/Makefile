# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 17:30:34 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/28 17:30:34 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Few
CXX		:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Werror -Wextra
FILES	:= $(addsuffix .cpp, main)
OBJS	:= $(FILES:.cpp=.o)
RM		:= rm -rf

.Phony: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o:%.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
