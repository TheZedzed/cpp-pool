/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		~Character();
		Character(const Character&);
		Character(const std::string&);
		Character&	operator=(const Character&);
		void				equip(AMateria*);
		void				unequip(int);
		void				use(int, ICharacter&);
		const std::string&	getName(void) const;
	private:
		Character() {}
		std::string	_name;
		static int	_space_left;
		AMateria*	_inventory[4];
};
#endif
