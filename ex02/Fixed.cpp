/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:55:54 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:28:24 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->_fixedNum = 0;
}

Fixed::Fixed( Fixed const &ob)
{
    // std::cout << "Copy constructor called" << std::endl;
	if (this == &ob)
		return ;
	*this  = ob;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( int const intNum)
{
    // std::cout<< "Int constructor called" << std::endl;
    this->_fixedNum = intNum << this->_fracBits;
}

Fixed::Fixed(float const floatNum)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedNum = roundf(floatNum * (1 << this->_fracBits));
}

/********** toInt and toFloat functions *******/

float Fixed::toFloat( void ) const
{
    return ((float)this->_fixedNum / (1 << this->_fracBits));
}

int Fixed::toInt( void ) const
{
    return (this->_fixedNum >> 8);
}


/******* setter and getter *******/

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedNum);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedNum = raw;
}

/******* min and max functions *****/

const  Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._fixedNum >= b._fixedNum)
        return (a);
    else
        return (b);
}

const  Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._fixedNum <= b._fixedNum)
        return (a);
    else
        return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a._fixedNum >= b._fixedNum)
        return (a);
    else
        return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a._fixedNum <= b._fixedNum)
        return (a);
    else
        return (b);
}

/****** operateur d'assignation *****/

Fixed &Fixed::operator=( const Fixed &ob)
{
    // std::cout << "Assignation operator called" << std::endl; 
    this->_fixedNum = ob.getRawBits();
    return (*this);
}

/******** post/pre increment/decrement operators *****/

Fixed Fixed::operator++(int){
    Fixed old = *this;
    ++*this;
    return (old);
}

Fixed &Fixed::operator++(void){
    this->_fixedNum = this->_fixedNum + 1;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed old = *this;
    --*this;
    return (old);
}

Fixed &Fixed::operator--(void){
    this->_fixedNum = this->_fixedNum - 1;
    return (*this);
}

/******* operateurs arithmetiques *******/

Fixed Fixed::operator+(const Fixed &ob) const {
    Fixed newob;
    newob._fixedNum = this->_fixedNum + ob._fixedNum;
    return (newob);
}

Fixed Fixed::operator-(const Fixed &ob) const {
    Fixed newob;

    newob._fixedNum = this->_fixedNum - ob._fixedNum;
    return (newob);
}

Fixed Fixed::operator*(const Fixed &ob) const {
    Fixed newob;

    newob._fixedNum = ((this->_fixedNum * (long)ob._fixedNum) >> this->_fracBits);
    return (newob);
}

Fixed Fixed::operator/(const Fixed &ob) const {
    Fixed newob;
    newob._fixedNum = (((this->_fixedNum) << this->_fracBits) / ob._fixedNum);
    return (newob);
}

std::ostream& operator<< (std::ostream& out, const Fixed& ob)
{
    out << ob.toFloat() ;
    return (out);
}

/********* operateurs de comparaison ********/

bool  operator<(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator>(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator<=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (true);
    else
        return (false);
}

bool operator>=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() >= b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator==(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() == b.getRawBits())
        return (true);
    else
        return (false);
}

bool  operator!=(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() != b.getRawBits())
        return (true);
    else
        return (false);
}
