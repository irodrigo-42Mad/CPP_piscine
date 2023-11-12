/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:59:45 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/26 11:36:00 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap ct1("Yoda Master");
	ClapTrap ct2("Darth Vader");
	ClapTrap ct3 ( ct1 );

	std::cout << std::endl;
	std::cout << "View ClapTrap data: " << ct1.getName() << std::endl;
	std::cout << "AttackDamage: " << ct1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << ct1.getHitPoints() << std::endl;
	std::cout << std::endl;	
	ct3.attack(ct1.getName());
	ct1.takeDamage(3);
	ct1.beRepaired(6);
	std::cout << "View ClapTrap data: " << ct1.getName() << std::endl;
	std::cout << "AttackDamage: " << ct1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << ct1.getHitPoints() << std::endl;
	std::cout << std::endl;
	ct1.attack(ct2.getName());
	ct2.takeDamage(4);
	ct1.beRepaired(8);
	std::cout << "View ClapTrap data: " << ct1.getName() << std::endl;
	std::cout << "AttackDamage: " << ct1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << ct1.getHitPoints() << std::endl;
	std::cout << std::endl;
	ct1.attack(ct3.getName());
	ct3.takeDamage(ct3.getAttackDamage());
	ct1.takeDamage(2);
	std::cout << "View ClapTrap data: " << ct1.getName() << std::endl;
	std::cout << "AttackDamage: " << ct1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << ct1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << ct1.getHitPoints() << std::endl;
	std::cout << std::endl;	
	ct3 = ct1;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Creating ScavTrap elements" << std::endl;
	ScavTrap St1("Sinacio");
	ScavTrap St2("White Wolf");
	ScavTrap St3( St1 );
	std::cout << std::endl;
	std::cout << "View ScavTrap data: " << St2.getName() << std::endl;
	std::cout << "AttackDamage: " << St1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << St1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << St1.getHitPoints() << std::endl;
	std::cout << std::endl;
	St1.attack(ct2.getName());
	ct2.attack(St3.getName());
	ct2.beRepaired(8);
	St1.attack(St3.getName());
	St1 = St2;
	St1.guardGate();
	std::cout << std::endl;

	return (0);
}
