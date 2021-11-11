/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:16 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		virtual	~Animal();
		Animal(const Animal &);
		Animal&	operator=(const Animal &);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string	_type;
};
#endif
