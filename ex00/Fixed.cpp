/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:20:07 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:33:16 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &ob)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this == &ob)
		return ;
	*this = ob;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedNum);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedNum = raw;
}

Fixed &Fixed::operator=( const Fixed &ob)
{
	std::cout << "Assignation operator called" << std::endl; 
	this->_fixedNum = ob.getRawBits();
	return (*this);
}
