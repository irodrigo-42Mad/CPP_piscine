/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:05:42 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 10:26:47 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string.h>

class Brain{
    private:
	  std::string _ideas[100];

    public:
        Brain();
        Brain(Brain const &);
        ~Brain();

        void setIdea(std::string myidea, int idx);
        std::string const &getIdea(int idx) const;
        Brain &operator=(Brain const &);
};
#endif
