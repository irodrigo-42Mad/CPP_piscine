/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:12 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 11:06:26 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor, copy constructor and destructor
Animal::Animal() : _type("")
{
	std::cout << "Father class animal constructor called" << std::endl;
}

Animal::Animal(Animal const &elm_cpy)
{
    this->_type = elm_cpy.getType();
    std::cout << "Father class Animal copy constructor called" << std::endl;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Father class type animal constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Father class animal has destroyed, destructor called" << std::endl;
}

// Equal operator overload
Animal &Animal::operator = (Animal const &elm)
{
    std::cout << "An equal operator have been called." << std::endl; 
    _type = elm._type;
    return *this;
}

// Necesary setters and getters
void Animal::setType(std::string const &type)
{
    this->_type = type;
}

std::string Animal::getType() const{
    return _type;
}

// public member functions of animal class
void Animal::makeSound() const{
    std::string type = this->getType();
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    if (type == "Dog")
        std::cout << "Woff Woff Woff" << std::endl;
    else if (type == "Cat")
        std::cout << "Meaow Meaow" << std::endl;
    else
        std::cout << "-----" << std::endl;
}
