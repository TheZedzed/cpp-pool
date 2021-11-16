# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    script.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 21:26:07 by azeraoul          #+#    #+#              #
#    Updated: 2021/11/16 14:28:39 by azeraoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

for item in *
	do 
		echo "add header to $item";
		vim -c "Stdheader" $item -c "wq";
done;
