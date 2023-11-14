/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:46:44 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 12:19:06 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors and destructors of Character class
Character::Character(){
	//std::cout << "Character default constructor has been called" << std::endl;
}

Character::Character(std::string who){
	/*std::cout << "Character constructor called for " << who  \
		<< " element." << std::endl; */
    this->_name = who;
    // initializing inventory
	for (int i=0; i<4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const &elm_cpy){
	//std::cout << "Character copy constructor has been called" << std::endl;
    this->_name = elm_cpy.getName();
	// cloning inventory
	for (int i = 0; i <= 3; i++)
		_inventory[i] = elm_cpy._inventory[i]->clone();
}

Character::~Character(){
	// before msg, destroy inventory elements
	for (int i=0; i <= 3; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
	}	
	//std::cout << "Character destructor is called" << std::endl;
}

// Character equal operator overload
Character &Character::operator = (Character const &elm_cpy){
    this->_name = elm_cpy.getName();
	for (int i=0; i <= 3; i++)
	{
		if (_inventory[i] != NULL)
			delete (_inventory[i]);
	}
	for (int i=0; i <= 3; i++)
		_inventory[i] = elm_cpy._inventory[i]->clone();
    return *this;
}

// getters and setters
std::string const &Character::getName() const{
    return this->_name;
}

// virtual functions overload for ICharacter and AMateria

// function that equips one character with inventory materia elements


// hay que comprobar el funcionamiento de AMateria en este procedimiento
void Character::equip(AMateria *mat){
    for (int i=0; i<4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = mat;
            break;
        }
    }
}

// hay que modificar este elemento para combinarlo correctamente.


// function that unequip character of materia index of slot idx
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 )
		this->_inventory[idx] = NULL;
}

// permits a character use element materia over targets
void Character::use(int idx, ICharacter &target)
{
	if ((idx >= 0 && idx < 4) && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "You don´t have equiped this materia." << std::endl;
}
