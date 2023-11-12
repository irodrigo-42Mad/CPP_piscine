/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:05:54 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/14 10:57:26 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	// return 0;
	
	Fixed a;
	Fixed b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "a + a is " << a + a << std::endl;
	std::cout << "a - a is " << a - a << std::endl;
	std::cout << "a / a is " << a / a << std::endl;
	std::cout << "a * a is " << a * a << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a <= b  is " << (a <= b) << std::endl;
	std::cout << "a == a is " << (a == a) << std::endl;
	std::cout << "a != a is " << (a != a) << std::endl;
	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
	std::cout << "min(c, d) is " << Fixed::min(c, d) << std::endl;
	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
	std::cout << "max(c, d) is " << Fixed::max(c, d) << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		return (0);
}
