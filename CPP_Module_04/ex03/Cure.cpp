/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:14:07 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 12:05:39 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"

// Cure constructor, copy constructor and destructor
Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor is called" << std::endl;
}
		
Cure::Cure(Cure const &elm_cpy) : AMateria(elm_cpy)
{
	//std::cout << "Cure copy constructor called" << std::endl;
	*this = elm_cpy;
}
		
Cure::~Cure()
{
	//std::cout << "Cure default constructor is called" << std::endl;
}

// Cure equal assigment operator
Cure &Cure::operator = (Cure const &cure_elm)
{
	//std::cout << "Cure assignation operator called" << std::endl;
	
	this->_type = cure_elm.getType();
	return *this;
}

// public functions of Cure class
AMateria *Cure::clone() const
{
	return (new Cure (*this));
}	
        
void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}
