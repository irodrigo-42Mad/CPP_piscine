/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:29:30 by irodrigo          #+#    #+#             */
/*   Updated: 2022/10/25 14:35:58 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        std::string _Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(DiamondTrap const &elm_cpy);
        ~DiamondTrap();

        DiamondTrap &operator=(DiamondTrap const &);
        void attack(std::string const &target);
        void whoAmI() const;
};
#endif
