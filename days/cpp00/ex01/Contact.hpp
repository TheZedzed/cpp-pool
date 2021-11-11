/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:58:27 by azeraoul          #+#    #+#             */
/*   Updated: 2021/10/23 17:58:28 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class	Contact {
	public:
		void	fill();
		void	info();
		void	print();
		Contact();
		~Contact();
	private:
		std::string	nname;
		std::string	fname;
		std::string	lname;
		std::string	phone;
		std::string	secret;
};
#endif
