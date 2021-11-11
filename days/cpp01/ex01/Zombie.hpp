/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 21:15:47 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:08:50 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string);
	private:
		std::string	_name;
};

Zombie*	zombieHorde(int, std::string);
#endif
