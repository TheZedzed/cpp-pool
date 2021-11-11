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

class	Fixed {
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed&	operator=(const Fixed&);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_raw;
		static const int	_bits = 8;
};
#endif
