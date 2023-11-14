/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:12:04 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 11:30:30 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// constructor, copy constructor and destructor of dog class
Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
    std::cout << "Default Dog animal has constructed" << std::endl;
}

Dog::Dog(Dog const &elm_cpy){
    std::cout << "Dog animal copy constructor has been called" << std::endl;
    _brain = new Brain();
    this->_type = elm_cpy.getType();
    if (elm_cpy._brain)
        *(this->_brain) = *(elm_cpy._brain);    // put all ideas in
}

Dog::~Dog(){
    delete this->_brain;                // clean dog brain before msg
    std::cout << "Dog animal has completely destroyed" << std::endl;
}

// equal operator overload
Dog &Dog::operator = (Dog const &elm_cpy)
{
    _type = elm_cpy._type;
    this->_brain = elm_cpy._brain;    // put all ideas in
    return *this;
}

// class public member functions
void Dog::makeSound() const{
    std::cout << "the " << this->getType() << " is an animal " \
    	<< "and his sound is " \
    	<< "Guauu Guauu" << std::endl;
}

Brain *Dog::getbrain() const
{
    return(this->_brain);
}
