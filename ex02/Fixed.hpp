/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:58:12 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:28:40 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedNum;
    static const int _fracBits = 8;
public:
    Fixed();
    Fixed( Fixed const &ob);
    Fixed( int const intNum );
    Fixed( float const floatNum );
    ~Fixed();

    int getRawBits( void ) const;
    void setRawBits( int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed &operator=( const Fixed &ob);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    Fixed operator+(const Fixed &ob) const;
    Fixed operator-(const Fixed &ob) const;
    Fixed operator*(const Fixed &ob) const;
    Fixed operator/(const Fixed &ob) const;

    static Fixed const &max(const Fixed &a, const Fixed &b);
    static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
};

std::ostream& operator<< (std::ostream& out, const Fixed& ob);
bool operator<(const Fixed &a, const Fixed &b);
bool operator>(const Fixed &a, const Fixed &b);
bool operator>=(const Fixed &a, const Fixed &b);
bool operator<=(const Fixed &a, const Fixed &b);
bool operator==(const Fixed &a, const Fixed &b);
bool operator!=(const Fixed &a, const Fixed &b);
#endif
