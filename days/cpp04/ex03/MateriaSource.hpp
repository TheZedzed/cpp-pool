/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 22:31:58 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:58 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource&	operator=(const MateriaSource&);
		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string&);
	private:
		static int	_space_left;
		AMateria*	_memory[4];
};
#endif
