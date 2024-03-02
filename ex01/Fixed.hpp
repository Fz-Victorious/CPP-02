/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:03:27 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:34:45 by fabou-za         ###   ########.fr       */
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
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator=( const Fixed &ob);
};

std::ostream& operator<< (std::ostream& out, const Fixed& ob);
#endif
