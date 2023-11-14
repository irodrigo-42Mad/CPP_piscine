/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:09:44 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 12:39:01 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// MateriaSource Constructor, copy constructor and destructor
MateriaSource::MateriaSource(): source() {
	// int i; 
    
	// // std::cout << "MateriaSource default constructor is called" << std::endl;

	// // need this for initialize material inventary slots
	// i = 0;
	// while (i < 4)
	// {
	// 	source[i] = NULL;
	// 	i++;
	// }
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	int i;

    // std::cout << "MateriaSource copy constructor is called" << std::endl;
	i = 0;
	while (i < 4)
	{
		if (src.source[i] != NULL)
			this->source[i] = src.source[i]->clone();
		i++;
	}
}

MateriaSource::~MateriaSource(){
    int i;

	// std::cout << "Materia Source destructor is called" << std::endl;
	// deleting slots of materials in common inventary
    i = 0; 
	while (i < 4)
	{
		delete this->source[i];
		i++;
	}
}

// equal operator overload
MateriaSource &MateriaSource::operator = (MateriaSource const &elm_cpy)
{
	for (int i=0; i <= 3; i++)
		this->source[i] = elm_cpy.source[i]->clone();
    return *this;
}

// public MateriaSource Functions
void MateriaSource::learnMateria( AMateria *m)
{
	int i;

	i = 0;
	while (this->source[i] != NULL)
		i++;
	if (i < 4)
		this->source[i] = m;
	else
		std::cout << "You can´t learn more materias" << std::endl;
}

AMateria *MateriaSource::createMateria( std::string const &type)
{
    int i;
	// std::cout << type << " materia created" << std::endl;
	i = 0;
	while (i < 4 && this->source[i]->getType() != type)
		i++;
	if (i < 4)
		return (this->source[i]->clone());
	return (0);
}
