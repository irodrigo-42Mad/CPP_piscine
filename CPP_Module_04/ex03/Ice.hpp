/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:00:40 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/24 11:11:35 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"   
#include "ICharacter.hpp"   

class Ice : public AMateria{
    public:
        Ice();
        Ice(Ice const &);
        virtual ~Ice();

        Ice &operator = (Ice const &);

        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif
