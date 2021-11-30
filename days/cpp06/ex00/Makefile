# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 14:35:59 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/23 14:35:59 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= Converter
CXX		:= clang++
CXXFLAGS	:= -Werror -Wall -Wextra
RM		:= rm -rf
FILES	:= $(addsuffix .cpp, main)
OBJS	:= $(FILES:.cpp=.o)

.Phony: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $< -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
