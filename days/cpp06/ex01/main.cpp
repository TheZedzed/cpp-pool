/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:36:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/23 14:36:17 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Data {
	public:
		Data() {}
		~Data() {}
		Data(const Data& org) {*this = org;}
		Data&	operator=(const Data&) {return *this;}
};

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void) {
	Data*	test = new Data;

	uintptr_t	res1 = serialize(test);
	Data*		res2 = deserialize(res1);

	std::cout << res2 << " + " << test << std::endl;
	delete test;
	return 0;
}
