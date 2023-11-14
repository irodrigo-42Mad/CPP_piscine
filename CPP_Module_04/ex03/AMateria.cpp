/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:21:13 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 10:52:47 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"


// constructor, copy constructor and destructor
AMateria::AMateria(){
	//std::cout << "Materia default constructor has been called" << std::endl;
	this->_type = "Materia";
}

AMateria::AMateria(AMateria const &elm_cpy){
	//std::cout << "Materia copy constructor has been called" << std::endl;
    this->_type = elm_cpy.getType();
}
        
AMateria::AMateria(std::string const &type){
	//std::cout << "AMateria type constructor is called" << std::endl;
    this->_type = type;
}
		
AMateria::~AMateria(){
	//std::cout << "AMateria destructor is called" << std::endl;
}

AMateria &AMateria::operator = (AMateria const &elm_cpy){
    //std::cout << "AMateria operator = is called" << std::endl;
    this->_type = elm_cpy.getType();
    return *this;
}

std::string const &AMateria::getType() const{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses " << this->_type <<  \
		" at " << target.getName() << " *" << std::endl;
}
