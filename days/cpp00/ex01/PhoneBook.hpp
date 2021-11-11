/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:58:14 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/23 17:58:16 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {
	public:
		void	add();
		void	sch();
		PhoneBook();
		~PhoneBook();
	private:
		int		index;
		Contact	memory[8];
		bool	numeric(std::string);
};

#endif
