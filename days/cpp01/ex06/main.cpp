/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:15:30 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 13:15:31 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main (int ac, char **av) {
	const std::string	dflt = "[ Probably complaining about insignificant problems ]";
	const std::string	choice[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int					level = -1;
	Karen				milf;

	if (ac == 2)
	{
		const std::string	arg = av[1];
		while (++level < 4) {
			if (!arg.compare(choice[level])) {
				break ;
			}
		}
		do {
			switch (level) {
				case 0:
					milf.complain("DEBUG");
					break ;
				case 1:
					milf.complain("INFO");
					break ;
				case 2:
					milf.complain("WARNING");
					break ;
				case 3:
					milf.complain("ERROR");
					break ;
				default:
					std::cout << dflt << std::endl;
			}
			++level;
		} while (level < 4);
	}
	return 0;
}
