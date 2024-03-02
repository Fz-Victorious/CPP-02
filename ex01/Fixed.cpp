/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:47:00 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:32:15 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedNum = 0;
}

Fixed::Fixed( Fixed const &ob)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this == &ob)
		return ;
	*this  = ob;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const intNum)
{
	std::cout<< "Int constructor called" << std::endl;
	this->_fixedNum = intNum << this->_fracBits;
}

Fixed::Fixed( float const floatNum)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedNum = roundf(floatNum * (1 << this->_fracBits));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->_fixedNum / (1 << this->_fracBits));
}

int Fixed::toInt( void ) const
{
	return (this->_fixedNum >> 8);
}

int Fixed::getRawBits(void) const
{
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

std::ostream& operator<< (std::ostream& out, const Fixed& ob)
{
	out << ob.toFloat() ;
	return (out);
}
