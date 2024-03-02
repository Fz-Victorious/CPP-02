/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 22:24:25 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/25 22:28:53 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


int main(void)
{
   Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;


   /* std::cout << std::endl;
    std::cout << "mes tests" << std::endl;

    Fixed c(5.5f);
    Fixed d(2);
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "a = " << a << std::endl;
    a = d;

    std::cout << "a = " << a << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    if (c > d)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << " | "
              << "d - c = " << d - c << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    */
    /*Fixed a(1);
    Fixed b(3);
    std::cout << a * b << std::endl;*/

}
