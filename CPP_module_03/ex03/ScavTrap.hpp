/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/19 14:07:14 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAPTRAP_HPP
#define SCAPTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &);
	~ScavTrap();

	ScavTrap& operator = (ScavTrap const &toCopy);

	void guardGate();
	void attack(std::string const &target);
};
#endif
