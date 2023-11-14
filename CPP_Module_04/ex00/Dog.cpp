/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:12:04 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 11:09:06 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructor, copy constructor and destructor of dog class
Dog::Dog(){
    std::cout << "Default Dog animal has constructed" << std::endl;
    Animal::_type = "Dog";
}

Dog::Dog(Dog const &elm_cpy){
    std::cout << "Dog animal copy constructor has been called" << std::endl;
    this->_type = elm_cpy.getType();
}

Dog::~Dog(){
    std::cout << "Dog animal has completely destroyed" << std::endl;
}

// equal operator overload
Dog &Dog::operator = (Dog const &elm_cpy)
{
    std::cout << "An equal dog operator have been called." << std::endl;
    _type = elm_cpy._type;
    return *this;
}

// class public member functions
void Dog::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Guauuu Guauuu" << std::endl;
}
