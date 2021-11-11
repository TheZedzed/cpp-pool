/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 22:25:58 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 22:26:22 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed& cpy);
		int				toInt(void) const;
		float			toFloat(void) const;
		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		Fixed&			operator=(const Fixed&);
	private:
		int					_raw;
		static const int	_bits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs);
#endif
