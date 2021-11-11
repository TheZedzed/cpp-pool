# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 13:22:35 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/09 13:22:35 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:=clang++;
CXXFLAGS	:= -std=c++98 -Wall -Wextra -Werror
FILES		:= $(addsuffix .cpp, main Bureaucrat)
OBJS	:= $(FILES:.cpp:.o)

.Phony: all re fclean clean

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all