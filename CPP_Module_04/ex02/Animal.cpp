/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:12 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 10:24:59 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor, copy constructor and destructor
Animal::Animal(){
}

Animal::Animal(Animal const &elm_cpy)
{
    this->_type = elm_cpy.getType();
    std::cout << "Father class Animal copy constructor called" << std::endl;
    *this = elm_cpy;
}

Animal::~Animal(){
    std::cout << "Father class animal has destroyed, destructor called" << std::endl;
}

// Necesary setters and getters
std::string Animal::getType() const{
    return _type;
}

Animal& Animal::operator = (const Animal&) {
    return *this;
}
