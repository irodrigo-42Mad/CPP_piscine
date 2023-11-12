/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:48 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/14 12:37:22 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// constructor and destructor of ScavTrap class
FragTrap::FragTrap(): ClapTrap("")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor for " << getName() << " called." << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap(FragTrap const &cpy_elm)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = cpy_elm;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor of " << getName() << " called." << std::endl;
}

// equal operator overload
FragTrap& FragTrap::operator = (FragTrap const &cpy_elm)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_Name = cpy_elm.getName();
	this->_HitPoints = cpy_elm.getHitPoints();
	this->_EnergyPoints = cpy_elm.getEnergyPoints();
	this->_AttackDamage = cpy_elm.getAttackDamage();
	return (*this);
}

// public functions of FragTrap
void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << getName() \
		<< " attack "	<< target << ", causing " \
		<< getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << getName() << " high fives" << std::endl;
}
