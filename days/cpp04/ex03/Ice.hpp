/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		~Ice() {}
		Ice() : AMateria("ice") {}
		Ice(const Ice&);
		Ice&	operator=(const Ice&);
		Ice*	clone(void) const;
		void		use(ICharacter&);
};
#endif
