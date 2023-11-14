/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:31:53 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 12:56:43 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string const &);
		Animal(Animal const &);
        virtual ~Animal();


        Animal &operator=(Animal const &);
        std::string getType() const;
		void setType(std::string const &type);
		virtual void makeSound() const;
		virtual Brain *getbrain() const = 0;
};

#endif
