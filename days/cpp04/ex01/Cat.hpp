/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 21:24:17 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/06 21:31:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#  include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat(const Cat&);
		Cat&	operator=(const Cat&);
		void	makeSound(void) const;
	private:
		Brain*	_brain;
};
#endif
