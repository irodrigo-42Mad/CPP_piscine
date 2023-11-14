/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:24 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 11:09:06 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Default Cat animal has constructed" << std::endl;
    Animal::_type = "Cat";
}

Cat::Cat(Cat const &elm_cpy){
    std::cout << "Cat animal copy constructor has been called" << std::endl;
    this->_type = elm_cpy.getType();
}

Cat::~Cat(){
    std::cout << "Cat animal has completely destroyed" << std::endl;
}

Cat &Cat::operator = (Cat const &elm_cpy)
{
    std::cout << "An equal cat operator have been called." << std::endl;
    _type = elm_cpy._type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << this->getType() << " is an animal ";
    std::cout << "and his sound is ";
    std::cout << "Miiiauu Miiiauu" << std::endl;
}
