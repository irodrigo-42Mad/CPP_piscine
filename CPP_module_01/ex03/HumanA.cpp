/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/05 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanA.hpp"

HumanA::HumanA(std::string myname, Weapon &weapon) : _weapon(weapon)
{
    this->_name = myname;
	this->_weapon = weapon;
}

void HumanA::attack() const
{
    std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType() << std::endl;
}
