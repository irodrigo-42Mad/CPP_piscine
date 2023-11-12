/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/05 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
    return;
}

void    HumanB::setWeapon(Weapon &weapon){
    this->_weapon = &weapon;
}

void HumanB::attack() const{
    if (this->_weapon == NULL)
    {
        std::cout << "Error can't take this weapon" << std::endl;
        return;
    }
    else
	{
        std::cout << this->_name << " attacks with his ";
		std::cout << _weapon->getType() << std::endl;
	}
    return ;
}
