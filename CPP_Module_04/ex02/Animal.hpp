/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:26:33 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 10:21:50 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal{
    protected:
        Animal();
        std::string _type;

    public:
        virtual ~Animal();
        virtual void makeSound() const = 0;
        std::string getType() const;
        virtual Brain *getbrain() const = 0;
    
    private:
        Animal(Animal const &);
        Animal &operator=(Animal const &);
};
    

#endif
