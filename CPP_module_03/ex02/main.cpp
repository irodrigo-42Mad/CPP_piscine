/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:59:45 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 13:19:20 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	St2.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Creating FragTrap elements" << std::endl;
	FragTrap ft1("Bisho");
	FragTrap ft2("otro bisho");
	FragTrap ft3( ft1 );
	std::cout << std::endl;
	std::cout << "View FragTrap data: " << ft1.getName() << std::endl;
	std::cout << "AttackDamage: " << ft1.getAttackDamage() << std::endl;
	std::cout << "EnergyPoints: " << ft1.getEnergyPoints() << std::endl;
	std::cout << "HitPoints: " << ft1.getHitPoints() << std::endl;
	std::cout << std::endl;
	ct2.beRepaired(50);
	ft1.attack(ct2.getName());
	ct2.takeDamage(ft1.getHitPoints());
	ct2.attack(ft1.getName());
	ft1.takeDamage(ct2.getHitPoints());
	St1.attack(ft2.getName());
	ft3 = ft2;
	ft3.highFiveGuys();
	ft2.highFiveGuys();
	


	return (0);
}
