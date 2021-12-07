/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeraoul <azeraoul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:30:55 by azeraoul          #+#    #+#             */
/*   Updated: 2021/11/30 16:51:38 by azeraoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <iostream>
# include <exception>

template<typename T>

class	Array {
	public:
		Array() : _elements(new T[0]), _size(0) {}
		~Array() {delete [] _elements;}
		Array(unsigned int n) : _elements(new T[n]), _size(n) {}
		Array(const Array<T>&);
		Array<T>&		operator=(const Array<T>&);
		T&				operator[](unsigned int);
		unsigned int	size(void) const {return _size;}
	private:
		T*				_elements;
		unsigned int	_size;
};

template<typename T>
Array<T>::Array(const Array<T>& org){
	this->_size = org._size;
	this->_elements = new T[_size];
	for (unsigned int i=0; i < _size; i++) _elements[i] = org._elements[i];
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& rgh) {
	if (this != rgh) {
		delete [] _elements;
		this->_size = rgh._size;
		this->_elements = new T[_size];
		for (unsigned int i=0; i < _size; i++) _elements[i] = rgh._elements[i];
	}
	return *this;
}

template<typename T>
T&	Array<T>::operator[](unsigned int n) {
	if (n >= _size) throw std::exception();
	return _elements[n];
}
#endif
