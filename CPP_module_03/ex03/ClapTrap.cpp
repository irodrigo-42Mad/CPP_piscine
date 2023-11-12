/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:48 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 13:43:17 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// constructors and destructors of ClapTrap class
ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "Calling " << name << " constructor." << std::endl;
}

// implementation of copy constructor
// si fuese constante alguno de los elementos se pasa como parámetro del constructor de copia con ":"
// : _Name(elm_cpy._Nane)

ClapTrap::ClapTrap(ClapTrap &elm_cpy) 
{	
	*this = elm_cpy;
	// this->_Name = elm_cpy._Name;
	// this->_HitPoints = elm_cpy._HitPoints;
	// this->_EnergyPoints = elm_cpy._EnergyPoints;
	// this->_AttackDamage = elm_cpy._AttackDamage;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Calling " << this->_Name << " destructor." << std::endl;
}

// equal operator overload for ClapTrap Class
ClapTrap&	ClapTrap::operator = (ClapTrap const &toCopy)
{
 	this->_Name = toCopy._Name;
	this->_HitPoints = toCopy._HitPoints;
 	this->_EnergyPoints = toCopy._EnergyPoints;
 	this->_AttackDamage = toCopy._AttackDamage;
 	return *this;
}

//setters and getters
std::string ClapTrap::getName(void) const
{
	return (this->_Name);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_EnergyPoints);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_HitPoints);
}
int ClapTrap::getAttackDamage(void) const
{
	return (this->_AttackDamage);
}

// public functions actions
void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << getName() \
		<< " attack "	<< target << ", causing " \
		<< getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_EnergyPoints -= amount;
	std::cout << "ClapTrap " << getName() << " took " \
		<< amount << " points of damage" << std::endl;
	if (getEnergyPoints() <= 0)
	{
		this->_EnergyPoints = 0;
		std::cout << "ClapTrap " << getName() \
			<< " die cannot be repared" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPoints())
	{
		this->_EnergyPoints += amount;
		std::cout << "ClapTrap " << getName() << " received "\
			<< amount << " health energy points" << std::endl;	
	}
	else
		std::cout << "ClapTrap " << getName() \
			<< " has dead and can't be repared" << std::endl;	
}
