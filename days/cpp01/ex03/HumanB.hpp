/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:30:14 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:04:03 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {
	public:
		HumanB(const std::string& name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon& name);
	private:
		HumanB();
		std::string	_name;
		Weapon*		_weapon;
};
#endif
