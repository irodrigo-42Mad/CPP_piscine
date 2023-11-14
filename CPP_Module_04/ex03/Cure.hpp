/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:22:02 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 11:03:17 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class ICharacter;
class Cure : public AMateria{
    public:
        Cure();
		Cure(Cure const &elm_cpy);
		virtual ~Cure();

        Cure &operator = (Cure const &elm_cpy);

        AMateria *clone() const;
        void use(ICharacter &target);
};

#endif
