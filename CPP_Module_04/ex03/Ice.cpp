/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:14:07 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 12:05:23 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

// Ice constructor, copy constructor and destructor
Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice default constructor is called" << std::endl;
	//this->_type = "Ice";
}
		
Ice::Ice(Ice const &elm_cpy) : AMateria(elm_cpy)
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = elm_cpy;
}
		
Ice::~Ice()
{
	//std::cout << "Ice default destructor is called" << std::endl;
}

// Ice equal assigment operator
Ice &Ice::operator = (Ice const &ice_elm)
{
	//std::cout << "Ice assignation operator called" << std::endl;
	this->_type = ice_elm.getType();
	return *this;
}

// public functions of Ice class
AMateria *Ice::clone() const
{
	return (new Ice (*this));
}	
        
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;	
}
