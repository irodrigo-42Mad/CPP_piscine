/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:11:48 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 10:36:49 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor and destructor of the class

Zombie::Zombie(){} // default constructor

Zombie::Zombie(std::string str)
{
	this->_name = str;
	this->announce();
}

Zombie::~Zombie()
{
	if (this->_name.size())
		std::cout << this->_name << " ";
	std::cout << "is destroyed" << std::endl;
}

void Zombie::announce()
{
	if (this->_name.size())
		std::cout << this->_name << " ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string myname)
{
	this->_name = myname;
}
