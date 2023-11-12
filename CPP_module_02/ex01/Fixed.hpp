/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:20 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/06 13:48:36 by irodrigo         ###   ########.fr       */
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
        
    int getRawBits(void) const;
    void setRawBits (int const rw);
    Fixed(int const);
    Fixed(float const);
    float toFloat() const;
    int toInt() const;
};

std::ostream	&operator<<( std::ostream &, Fixed const &elm );

#endif
