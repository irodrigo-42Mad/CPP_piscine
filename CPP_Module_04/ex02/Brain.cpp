/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:41:23 by irodrigo          #+#    #+#             */
/*   Updated: 2022/12/11 11:31:10 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

// constructor, copy constructor and destructor
Brain::Brain()
{
	// int x;

    std::cout << "Brain constructor has been called" << std::endl;
	// x = 0;
	// do
	// {
    // 	std::ostringstream elm;  // use necesary prior C11
    //     elm << x;
    //     _ideas[x] = "idea_" +  elm.str();
	// 	//_ideas[x] = "idea_"+ std::to_string(x); // in versions upper or equal C11
	// }while (++x < 100);
}

Brain::Brain(Brain const &cpy_br)
{
	int x;

    std::cout << "Brain copy constructor has been called" << std::endl;
	x = 0;
	do
        _ideas[x] = cpy_br._ideas[x];
	while (++x < 100);
}

Brain::~Brain(){
    std::cout << "Brain destructor has been called" << std::endl;
}

// equal operator overload
Brain &Brain::operator=(Brain const &cpy_br)
{
	int x;

    std::cout << "Brain asignment operator has been called" << std::endl;
	x = 0;
	do
	{
		_ideas[x] = cpy_br._ideas[x]; // revision del nombre de las variables
	}
	while(++x < 100);
    return *this;
}

// setters and getters
void Brain::setIdea(std::string myidea, int idx)
{
	this->_ideas[idx] = myidea;
}

std::string const & Brain::getIdea(int idx) const
{
	return (this->_ideas[idx]);	
}
