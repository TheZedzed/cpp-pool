/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:57 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:57 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure() : AMateria("cure") {}
		~Cure() {}
		Cure(const Cure&);
		Cure&	operator=(const Cure&);
		Cure*	clone(void) const;
		void	use(ICharacter&);
};
#endif
