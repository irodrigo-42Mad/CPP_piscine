/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:53:14 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 11:09:06 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructor, copy constructor and destructor
WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "Class WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &elm_cpy)
{
    this->_type = elm_cpy.getType();
    std::cout << "Class WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Class WrongAnimal has destroyed, destructor called" << std::endl;
}

// Equal operator overload
WrongAnimal &WrongAnimal::operator = (WrongAnimal const &elm)
{
    std::cout << "An equal WrongAnimal operator have been called." << std::endl;
    _type = elm._type;
    return *this;
}

// Necesary setters and getters
std::string WrongAnimal::getType() const{
    return _type;
}


// class public member functions 
void WrongAnimal::makeSound() const{
    std::cout << this->getType() << " is an WrongAnimal ";
    std::cout << "and his sound is ";
    std::cout << "Ete... Guauuu Ete.... Guauuu" << std::endl;
}


