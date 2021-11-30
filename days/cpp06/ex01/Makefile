# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 14:36:17 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/23 14:36:17 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX		:= clang++
NAME	:= Serialize
CXXFLAGS	:= -Wall -Werror -Wextra
RM		:= rm -rf
FILES	:= $(addsuffix .cpp, main)
OBJS	:= $(FILES:.cpp=.o)

.Phony: all re clean fclean

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
