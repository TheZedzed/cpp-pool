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
		int		toInt(void) const;
		float	toFloat(void) const;
		void	setRawBits(const int);
		int		getRawBits(void) const;
		static const Fixed&	max(const Fixed&, const Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&	max(Fixed&, Fixed&);
		static Fixed&	min(Fixed&, Fixed&);
		Fixed&	operator=(const Fixed&);
		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator>(const Fixed&) const;
		bool	operator<(const Fixed&) const;
		Fixed	operator+(const Fixed&) const;
		Fixed	operator-(const Fixed&) const;
		Fixed	operator*(const Fixed&) const;
		Fixed	operator/(const Fixed&) const;
		Fixed&	operator++(void);
		Fixed&	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
	private:
		int					_raw;
		static const int	_bits = 8;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& rhs);
#endif
