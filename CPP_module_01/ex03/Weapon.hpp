/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/10 13:43:29 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	/* Default constructor and destructor */
	Weapon();
	Weapon(std::string wpn_type);
	virtual	~Weapon();

	/* setter weapon functions */
	void setType(std::string wpn_type);

	/* getter weapon function */
	const std::string getType(void);

};

#endif /* __WEAPON_HPP__ */
