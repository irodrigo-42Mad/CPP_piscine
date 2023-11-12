/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/14 10:57:30 by irodrigo         ###   ########.fr       */
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

std::ostream &operator<<( std::ostream &out, Fixed const &elm ) 
{
	out << elm.toFloat();
	return out;
}

bool Fixed::operator<(Fixed const &elm) const
{
    return (this->_fix_num < elm.getRawBits());
}

bool Fixed::operator>(Fixed const &elm) const
{
    return (this->_fix_num > elm.getRawBits());
}

// unary operators overloads
Fixed &Fixed::operator++(void)
{
    this->_fix_num++;// += 1 << _frac_bit;
	return *this;
}

Fixed &Fixed::operator--(void)
{
    this->_fix_num--;// -= 1 << _frac_bit;
	return *this;
}

Fixed Fixed::operator++( int )
{
    Fixed	before(*this);
	++(*this);
	return before;
}

Fixed Fixed::operator--( int )
{
    Fixed	before(*this);
	--(*this);
	return before;  
}

/*
** basic operators overload
*/
Fixed Fixed::operator+(Fixed const &b_num) const
{
    return (this->toFloat() + b_num.toFloat());
}

Fixed Fixed::operator-(Fixed const &b_num) const
{
    return (this->toFloat() - b_num.toFloat());
}

Fixed Fixed::operator*(Fixed const &b_num) const
{
    return (this->toFloat() * b_num.toFloat());
}

Fixed Fixed::operator/(Fixed const &b_num) const
{
    return (this->toFloat() /b_num.toFloat());
}

/*
** Comparison operator overload
*/
bool	Fixed::operator >= (Fixed const &b_comp) const
{
    if (this->_fix_num >= b_comp._fix_num)
        return (true);
    else
        return (false);
}

bool	Fixed::operator <= (Fixed const &b_comp) const
{
    if (this->_fix_num <= b_comp._fix_num)
        return (true);
    else
        return (false);
}

bool	Fixed::operator == (Fixed const &b_comp) const
{
    if (this->_fix_num == b_comp._fix_num)
        return (true);
    else
        return (false);
}

bool	Fixed::operator != (Fixed const &b_comp) const
{
    if (this->_fix_num != b_comp._fix_num)
        return (true);
    else
        return (false);
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

//functional procedures Fixed class
Fixed&	Fixed::max(Fixed &el1, Fixed &el2)
{
    if (el1 > el2)
        return (el1);
    else
        return (el2);

}

Fixed&	Fixed::min(Fixed &el1, Fixed &el2)
{
    if (el1 < el2)
        return (el1);
    else
        return (el2);
}

const Fixed &Fixed::max( Fixed const &el1, Fixed const &el2 )
{
	if (el1 > el2)
        return (el1);
    else
        return (el2);
}

const Fixed &Fixed::min( Fixed const &el1, Fixed const &el2 )
{
    if (el1 < el2)
        return (el1);
    else
        return (el2);
}
