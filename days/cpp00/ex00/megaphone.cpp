/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:36:06 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/23 08:16:42 by thezedzed        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (*(++av)) {
		for (int i = 0; (*av)[i]; i++) {
			std::cout << (unsigned char) std::toupper((*av)[i]);
		}
	}
	std::cout << std::endl;
}
