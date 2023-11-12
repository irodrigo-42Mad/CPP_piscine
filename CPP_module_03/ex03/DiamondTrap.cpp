/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:48 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 14:53:52 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    this->_Name = "default";
    this->ClapTrap::_Name = this->_Name + "_clap_name";
    this->FragTrap::_HitPoints = 100;
    this->ScavTrap::_EnergyPoints = 50;
    this->FragTrap::_AttackDamage = 30;
    std::cout << "DiamondTrap default constructor for " \
		<< _Name << " is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _Name(name){
    this->ClapTrap::_Name = name + "_clap_name";
    this->FragTrap::_HitPoints = 100;
    this->ScavTrap::_EnergyPoints = 50;
    this->FragTrap::_AttackDamage = 30;
    std::cout << "DiamondTrap constructor for " \
		<< name <<  "is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy_elm) : _Name(cpy_elm.getName()){
    this->ClapTrap::_Name = cpy_elm.getName();
    this->FragTrap::_HitPoints = cpy_elm.getHitPoints();
    this->ScavTrap::_EnergyPoints = cpy_elm.getEnergyPoints();
    this->FragTrap::_AttackDamage = cpy_elm.getAttackDamage();
    std::cout << "DiamondTrap copy constructor is called" << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap destructor is called and " \
		<< getName() << " element has been destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &cpy_elm)
{
	this->_Name = cpy_elm.getName();
	this->ClapTrap::_Name = cpy_elm.getName() + "_clap_name";
	this->FragTrap::_HitPoints = cpy_elm.getHitPoints();
	this->ScavTrap::_EnergyPoints = cpy_elm.getEnergyPoints();
	this->FragTrap::_AttackDamage = cpy_elm.getAttackDamage();
  return *this;
}

void DiamondTrap::attack(std::string const &target)
{
  std::cout << "DiamondTrap has launch attack: " << std::endl;
  ScavTrap::attack(target);
  std::cout << std::endl;
}

void DiamondTrap::whoAmI() const{
    std::cout << "I am DiamondTrap " << this->_Name \
		<< " and ClapTrap " << this->ClapTrap::_Name << std::endl;
}
