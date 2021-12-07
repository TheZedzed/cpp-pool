/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:08:07 by azeraoul          #+#    #+#             */
/*   Updated: 2021/12/06 13:10:00 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>

class	Span {
	public:
		~Span() {}
		Span(unsigned int n) : _N(n) {}
 		Span(const Span& cpy) { _tab = cpy._tab; _N = cpy._N; }
		Span&	operator=(const Span& rgh) {
			if (&rgh != this) { _tab = rgh._tab; _N = rgh._N; }
			return *this;
		}

		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			addNumber(const int&);
		std::vector<int>&	getTab(void) { return _tab; }

		template<typename Iterator>
		void	addNumber(Iterator first, Iterator last) {
			if (std::distance(first, last) > _N) throw "Can't add numbers!\n";
			std::copy(first, last, std::back_inserter(_tab));
			std::sort(_tab.begin(), _tab.end());
		}
	private:
		Span();
		std::vector<int>	_tab;
		unsigned int		_N;
};
#endif
