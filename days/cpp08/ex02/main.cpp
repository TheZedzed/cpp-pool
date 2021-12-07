/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:38:20 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 17:15:06 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main(void) {
	MutantStack<int>	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite) {
		std::cout << "elem: " << *it << std::endl;
		++it;
	}
	mstack.push_front(111);
	mstack.push_back(-111);
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite) {
		std::cout << "new elem: " << *it << std::endl;
		++it;
	}
	return 0;
}
