/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 12:07:57 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/22 11:49:24 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include <iostream>
# include <string.h>
# include "Ice.hpp"
# include "Cure.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"


class Character: public ICharacter{
	private:
		std::string _name;
		AMateria* _inventory[4];

	public:
		Character();
		Character(std::string who);
		Character(Character const &);
		virtual ~Character();
		Character &operator=(Character const &);
		std::string const &getName() const;

		void equip(AMateria* mat);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
