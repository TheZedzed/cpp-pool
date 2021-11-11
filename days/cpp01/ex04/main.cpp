/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:49:56 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 10:49:58 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char **av) {
	std::ifstream	in;

	if (ac == 4) {
		in.open(av[1]);
		if (in.is_open()) {
			std::string	filename = av[1];
			if (*av[2] && *av[3]) {
				std::ofstream	out(filename + ".replace");
				std::string		buffer;
				std::string		oldd = av[2];
				std::string		neww = av[3];
				std::size_t		found;

				while (getline(in, buffer)) {
					found = 0;
					while ((found = buffer.find(oldd)) != std::string::npos) {
						buffer.replace(found, oldd.length(), neww);
					}
					out << buffer << std::endl;
				}
			}
			else
				std::cout << "Error: str1 and str2 must be valid" << std::endl;
			in.close();
		}
		else
			std::cout << "Error: opening file" << std::endl;
	}
	else
		std::cout << "Usage: [file] [str1] [str2]" << std::endl;
	return 0;
}
