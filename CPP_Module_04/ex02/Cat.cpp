/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:24 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 11:24:20 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// constructor, copy constructor and destructor
Cat::Cat() {
	this->_myBrain = new Brain();
	this->_type = "Cat";
    std::cout << "Default Cat animal has constructed" << std::endl;
}

Cat::Cat(Cat const &elm_cpy) {
    std::cout << "Cat animal copy constructor has been called" << std::endl;
    _myBrain = new Brain();
    this->_type = elm_cpy.getType();
    if (elm_cpy._myBrain)
        *(this->_myBrain) = *(elm_cpy._myBrain);   // put all ideas in
}

Cat::~Cat(){
    delete this->_myBrain;                 // delete brain before msg
    std::cout << "Cat animal has completely destroyed" << std::endl;
}

// equal operator overload
Cat &Cat::operator = (Cat const &elm_cpy)
{
    _type = elm_cpy._type;
    *(this->_myBrain) = *(elm_cpy._myBrain);  // put all ideas in
    return *this;
}

// public cat member functions
void Cat::makeSound() const{
    std::cout << "the " << this->getType() << " is an animal " \
    	<< "and his sound is " \
    	<< "Miauuu Miauuu" << std::endl;
}

 Brain *Cat::getbrain() const
 {
    return (this->_myBrain);
 }
