/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:40:05 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:02:46 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon {
	public:
		Weapon(const std::string& name);
		~Weapon();
		const std::string	getType() const;
		void				setType(const std::string& name);
	private:
		Weapon();
		std::string	_type;
};
#endif
