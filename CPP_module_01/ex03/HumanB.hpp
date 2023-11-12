/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanb.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/05 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
    Weapon *_weapon;

public:
	HumanB(std::string name);
    void    setWeapon(Weapon &weapon);
    void    attack() const;
};

#endif
