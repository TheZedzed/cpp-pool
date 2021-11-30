/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:30:45 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/28 17:30:45 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	const char	*test1 = "zeeeaaz";
	int		test2[] = {14, 4, 77, 65, 33};

	iter(test1, 7, prrint);
	std::cout << std::endl;
	iter(test2, 5, prrint);
	std::cout << std::endl;
	return 0;
}
