/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:49:37 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string	_type;
	public:
		AMateria() {}
		virtual	~AMateria() {}
		AMateria(const std::string&);
		AMateria(const AMateria&);
		AMateria&	operator=(const AMateria&);
		const std::string&	getType(void) const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter&);
};
#endif