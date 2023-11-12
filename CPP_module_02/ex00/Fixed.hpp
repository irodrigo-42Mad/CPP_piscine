/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:11:20 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/05 11:24:42 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

private:
	int			        _fix_num;
	static const int	_frac_bit;

public:
	Fixed();
    ~Fixed();
    Fixed(Fixed &);

    Fixed &operator=(Fixed const &);
        
    int getRawBits(void) const;
    void setRawBits (int const raw);
};

#endif
