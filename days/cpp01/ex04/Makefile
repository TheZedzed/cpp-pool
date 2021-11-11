# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 16:37:02 by azeraoul          #+#    #+#              #
#    Updated: 2021/10/24 12:34:26 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror
NAME		:= replace 
RM			:= rm -rf

SRCS		+= $(addsuffix .cpp, main)
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
