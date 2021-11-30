/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:35:59 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/23 14:35:59 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>

void		ConvertChar(double res) {
	char	c = static_cast<char>(res);

	if (isprint(c)) std::cout << "char: \'" << c << "\'\n";
	else std::cout << "char: Non displayable\n";
}

void		ConvertInt(double res) {
	int	c = static_cast<int>(res);

	std::cout << "int: " << c << "\n";
}

void		ConvertFloat(double res) {
	float	c = static_cast<float>(res);

	std::cout.precision(1);
	std::cout << std::fixed;
	std::cout << "float: " << c << "f\n";
}

void		ConvertDouble(double res) {
	double	c = static_cast<double>(res);

	std::cout << "double: " << c << std::endl;
}

bool	is_float(const char *str) {
	static bool	pass = false;

	if (*str == '-' || *str == '+')
		++str;
	while (*str && (isdigit(*str) || (*str == '.' && !pass && (pass = true))))
		++str;
	if (*str == 'f' && !*(str + 1))
		return true;
	return false;
}

bool	is_double(const char *str) {
	static bool	pass = false;

	if (*str == '-' || *str == '+')
		++str;
	while (*str && (isdigit(*str) || (*str == '.' && !pass && (pass = true))))
		++str;
	if (*str)
		return false;
	return true;
}

bool	is_int(const char *str) {
	if (*str == '-' || *str == '+')
		++str;
	while (*str && isdigit(*str))
		++str;
	if (*str)
		return false;
	return true;
}

bool	what(const char *str, double *res) {
	bool	good = false;

	if (strlen(str) == 3 && str[0] == '\'' && str[2] == '\'' && (good = true))
		*res = static_cast<double>(str[1]);
	else if ((is_int(str) || is_float(str) || is_double(str)) && (good = true))
		*res = std::stod(str);
	return good;
}

int	main(int ac, char **av) {

	if (ac == 2) {
		double		res;
		std::string	str = av[1];

		if (str == "nan" || str == "nanf") {
			std::cout << "char: impossible\nint: imossible\n";
			std::cout << "float: nanf\ndouble: nan" << std::endl;
		}
		else if (str == "+inf" || str == "+inff") {
			std::cout << "char: impossible\nint: imossible\n";
			std::cout << "float: +inff\ndouble: +inf" << std::endl;
		}
		else if (str == "-inf" || str == "-inff") {
			std::cout << "char: impossible\nint: imossible\n";
			std::cout << "float: -inff\ndouble: -inf" << std::endl;
		}
		else if(what(av[1], &res)) {
			ConvertChar(res);
			ConvertInt(res);
			ConvertFloat(res);
			ConvertDouble(res);
		}
		else {
			std::cerr << "char: impossible\nint: impossible\n";
			std::cerr << "float: impossible\ndouble: impossible" << std::endl;
		}
	}
	else
		std::cerr << "Usage: [prog_name] [literal value]" << std::endl;
	return 0;
}
