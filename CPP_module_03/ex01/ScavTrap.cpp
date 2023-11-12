/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:48 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 14:42:14 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// constructor and destructor of ScavTrap class

ScavTrap::ScavTrap(): ClapTrap("") 
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor for " << getName() << " called." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &cpy_elm)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = cpy_elm;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor of " << getName() << " called." << std::endl;
}

// equal operator overload
ScavTrap& ScavTrap::operator = (ScavTrap const &cpy_elm)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_Name = cpy_elm.getName();
	this->_HitPoints = cpy_elm.getHitPoints();
	this->_EnergyPoints = cpy_elm.getEnergyPoints();
	this->_AttackDamage = cpy_elm.getAttackDamage();
	return (*this);
}

// public functions of ScavTrap
void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << getName() \
		<< " attack "	<< target << ", causing " \
		<< getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}
