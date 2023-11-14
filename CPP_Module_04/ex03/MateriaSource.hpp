/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:59:08 by irodrigo          #+#    #+#             */
/*   Updated: 2022/11/22 10:26:23 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *source[4];
	
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &);
        ~MateriaSource();

        MateriaSource &operator = (MateriaSource const &elm_cpy);

        void learnMateria(AMateria *);
        AMateria *createMateria(std::string const &type);
};

#endif
