/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:20:23 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:33:33 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
	private:
		int _fixedNum;
		static const int _frac = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &ob);
		int getRawBits( void ) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &ob);
};

#endif
