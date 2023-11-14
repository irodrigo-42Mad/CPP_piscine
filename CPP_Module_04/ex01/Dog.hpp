/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:33:00 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 12:53:30 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *_brain;

    public:
        Dog();
        Dog(Dog const &);
        ~Dog();

        Dog &operator=(Dog const &);
        void makeSound() const;
        Brain *getbrain() const;
};
#endif
