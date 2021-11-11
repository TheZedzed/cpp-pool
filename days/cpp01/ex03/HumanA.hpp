/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:30:14 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:05:35 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA {
	public:
		HumanA(const std::string&, Weapon&);
		~HumanA();
		void	attack() const;
	private:
		HumanA();
		std::string	_name;
		Weapon&		_weapon;
};
#endif
