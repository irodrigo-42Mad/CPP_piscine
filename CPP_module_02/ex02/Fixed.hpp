/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:20 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/13 12:27:56 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

private:
	int			        _fix_num;
	static const int	_frac_bit;

public:
	Fixed();
    ~Fixed();
    Fixed(const Fixed &);

    Fixed &operator=(Fixed const &);

    // precision control functions
    int getRawBits(void) const;
    void setRawBits (int const rw);

    // Constructor Overloading for int and float data types
    Fixed(int const);
    Fixed(float const);
    
    // conversion functions for diferent data types
    float toFloat() const;
    int toInt() const;

    // operator overload functions

        // less and greater operator
        bool operator<(Fixed const &elm) const;
        bool operator>(Fixed const &elm) const;
        // comparison operators
        bool operator>=(Fixed const &b_comp) const;
        bool operator<=(Fixed const &b_comp) const;
        bool operator==(Fixed const &b_comp) const;
        bool operator!=(Fixed const &b_comp) const;
        // unary operators
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        // basic operations operators
        Fixed operator+(Fixed const &b_num) const;
        Fixed operator-(Fixed const &b_num) const;
        Fixed operator*(Fixed const &b_num) const;
        Fixed operator/(Fixed const &b_num) const;

    // general operation functions for Fixed class
    static Fixed&	max(Fixed &el1, Fixed &el2);
    static Fixed&	min(Fixed &el1, Fixed &el2); 
    static const Fixed &max(Fixed const &el1, Fixed const &el2);
    static const Fixed &min(Fixed const &el1, Fixed const &el2);

};

std::ostream	&operator<<( std::ostream &, Fixed const &elm );

#endif
