/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:30:45 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/30 17:56:40 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class	Awesome {
	public:
		Awesome() : _n(42) {return;}
		int	get(void) const {return this->_n;}
	private:
		int	_n;
};
std::ostream&	operator<<(std::ostream& out, const Awesome& rgh) {
	out << rgh.get();
	return out;
}

template<typename T>
void print(T const el) {
	std::cout << el << std::endl;
	return;
}

int	main(void) {
	const char	*test1 = "zeeeaaz";
	int			test2[] = {14, 4, 77, 65, 33};
	float		test3[] = {14, 4, 77, 65, 33};

	int	tab[] = {0, 1, 2, 3, 4};
	Awesome	tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);
	iter(test1, 7, prrint);
	std::cout << std::endl;
	iter(test2, 5, prrint);
	std::cout << std::endl;
	iter<float>(test3, 5, prrint);
	std::cout << std::endl;
	return 0;
}
