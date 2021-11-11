/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 23:13:29 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/25 23:13:31 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	public:
		Zombie(std::string);
		~Zombie();
		void	announce(void);
	private:
		Zombie();
		std::string	_name;
};

Zombie*	newZombie(std::string);
void	RandomChump(std::string);
#endif
