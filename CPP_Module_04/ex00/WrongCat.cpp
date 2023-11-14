/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:07:15 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 11:09:06 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
// class WrongCat constructors and destructors
WrongCat::WrongCat()
{
	std::cout << "class WrongCat constructor called" << std::endl;
    WrongAnimal::_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &elm_cpy)
{
    this->_type = elm_cpy.getType();
    std::cout << "class WrongCat Animal copy constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "class WrongCat animal has destroyed, destructor called" << std::endl;
}

// Equal operator overload
WrongCat &WrongCat::operator = (WrongCat const &elm)
{
    std::cout << "An equal WrongCat operator have been called." << std::endl;
    _type = elm._type;
    return *this;
}
