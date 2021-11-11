/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:00:06 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/28 18:00:08 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const std::string&);
		ClapTrap(const ClapTrap&);
		ClapTrap&	operator=(const ClapTrap&);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		unsigned int	getHit(void) const;
		unsigned int	getAtt(void) const;
		std::string		getName(void) const;
		unsigned int	getEner(void) const;
	private:
		unsigned int	_Hitpoints;
		unsigned int	_Energypoints;
		unsigned int	_Attackdamage;
		std::string		_name;
};
std::ostream&	operator<<(std::ostream&, const ClapTrap&);
#endif
