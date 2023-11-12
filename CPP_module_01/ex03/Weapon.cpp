/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/05 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string wpn_type)
{
	this->_type = wpn_type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string wpn_type)
{
	this->_type = wpn_type;
}

const std::string Weapon::getType(void)
{
	return (this->_type);
}
