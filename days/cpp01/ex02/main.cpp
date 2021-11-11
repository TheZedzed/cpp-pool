/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:19:30 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/24 21:27:41 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "adress of str: " << &str << std::endl;
	std::cout << "adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "adresse of stringREF: " << &stringREF << std::endl;

	std::cout << "value in stringPTR: " << *stringPTR << std::endl;
	std::cout << "value in stringREF: " << stringREF << std::endl;
	return 0;
}
