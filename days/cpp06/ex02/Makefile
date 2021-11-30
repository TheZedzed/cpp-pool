# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 14:36:34 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/23 14:36:34 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror
NAME	:= Real
FILES	:= $(addsuffix .cpp, main)
OBJS	:= $(FILES:.cpp=.o)
RM		:= rm -rf

.Phony: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $< -o $@

%.o:%.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
