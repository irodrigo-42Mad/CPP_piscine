/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:32:01 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/09 12:54:04 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *_myBrain;

    public:
        Cat();
        Cat(Cat const &);
        ~Cat();

        Cat &operator=(Cat const &);
        void makeSound() const;
        Brain *getbrain() const;
};
#endif
