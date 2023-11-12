/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 14:44:10 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap
{
	private:
		std::string _Name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &);
		~ClapTrap();
    	ClapTrap &operator = (ClapTrap const &elm_cpy);
		
		std::string getName(void) const;
		int getEnergyPoints(void) const;
		int getHitPoints(void) const;
		int getAttackDamage(void) const;

		// public functions
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
