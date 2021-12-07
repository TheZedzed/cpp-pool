/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:07:44 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 13:04:43 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

void	Span::addNumber(const int& n) {
	if (_tab.size() == _N) throw "Limit reached!\n";
	_tab.push_back(n);
	std::sort(_tab.begin(), _tab.end());
}

unsigned int	Span::longestSpan(void) {
	if (_tab.size() <= 1) throw "Can't find a span!\n";
	return (*(_tab.end()) - *(_tab.begin()));
}

unsigned int	Span::shortestSpan(void) {
	std::vector<int>::iterator	first = _tab.begin();
	std::vector<int>::iterator	last = _tab.end();
	unsigned int	span;

	if (_tab.size() <= 1) throw "Can't find a span!\n";
	span = _tab[1] - _tab[0];
	while (++first != last) {
		if (static_cast<unsigned int>(*first - *(first - 1)) < span) {
			span = *first - *(first - 1);
		}
	}
	return span;
}
