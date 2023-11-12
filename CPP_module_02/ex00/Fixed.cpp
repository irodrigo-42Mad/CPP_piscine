/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/05 13:41:45 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bit = 8;

/*
** constructor, copy constructor and destructor
*/
Fixed::Fixed() 
{
	_fix_num = 0;
	std::cout << "call to default constructor" << std::endl;
}

Fixed::Fixed(Fixed &cpyelm){
    std::cout << "Copy constructor called" << std::endl;
    *this = cpyelm;
}

Fixed::~Fixed()
{
	std::cout << "call to default Destructor" << std::endl;
}

/*
** operator overloading
** if (this != &elmnt) control if exist operator memory direction
*/
Fixed &Fixed::operator=(Fixed const &elmnt){
    this->_fix_num = elmnt.getRawBits();
    std::cout << "Assignment operator called" << std::endl;
    return *this;
}

/*
** Setters and getters
*/
int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fix_num);
}

void Fixed::setRawBits(int const rw){
    std::cout << "setRawBits member function called" << std::endl;
    _fix_num = rw;
}
