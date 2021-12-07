/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:39:54 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 17:14:50 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class	MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack(const MutantStack& org) { *this = org; }
		MutantStack&	operator=(const MutantStack&) { return *this; }
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin(void) { return this->c.begin(); }
		iterator	end(void) { return this->c.end(); }
		void		push_front(const T& val) { this->c.push_front(val); }
		void		push_back(const T& val) { this->c.push_back(val); }
};
#endif
