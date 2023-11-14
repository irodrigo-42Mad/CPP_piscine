/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:31:53 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 14:20:52 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const &);
		Animal(std::string const &);
        virtual ~Animal();

        Animal &operator=(Animal const &);

        std::string getType() const;
		void setType(std::string const &type);
		virtual void makeSound() const;
};

#endif
