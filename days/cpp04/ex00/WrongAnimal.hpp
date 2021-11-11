/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:26:07 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		void	makeSound(void) const;
		std::string	getType(void) const;
		WrongAnimal&	operator=(const WrongAnimal&);
	protected:
		std::string	_type;
};
std::ostream&	operator<<(std::ostream&, const WrongAnimal&);
#endif
