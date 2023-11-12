/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/06 13:27:33 by irodrigo         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &cpyelm){
    std::cout << "Copy constructor called" << std::endl;
    *this = cpyelm;
}

Fixed::~Fixed()
{
	std::cout << "call to default Destructor" << std::endl;
}

/*
** constructor types for diferent number sizes
*/
Fixed::Fixed ( int const inum )
{
    this->_fix_num = inum << Fixed::_frac_bit;
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed ( float const fnum )
{
    this->_fix_num = (int) (roundf(fnum * ( 1 << Fixed::_frac_bit)));
    std::cout << "float constructor called" << std::endl;
}

/*
** fixed conversor types
*/
float Fixed::toFloat() const{
    return (float)this->_fix_num / (float)(1 << Fixed::_frac_bit);
}

int Fixed::toInt() const{
    return this->_fix_num >> Fixed::_frac_bit;
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

std::ostream	&operator<<( std::ostream &out, Fixed const &elm ) 
{
	out << elm.toFloat();
	return out;
}

/*
** Setters and getters
*/
int Fixed::getRawBits() const{
    // innecesary msg in this file
    // std::cout << "getRawBits member function called" << std::endl;
    return (_fix_num);
}

void Fixed::setRawBits(int const rw){
    std::cout << "setRawBits member function called" << std::endl;
    _fix_num = rw;
}
