/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:33:00 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/31 09:54:16 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        Dog(Dog const &);
        ~Dog();

        Dog &operator=(Dog const &);
        void makeSound() const;
};
#endif
