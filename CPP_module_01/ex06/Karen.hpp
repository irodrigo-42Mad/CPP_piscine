/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 12:18:44 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <string>

class Karen
{
public:
	// Constructor/Destructor
	Karen(void);
	~Karen(void);
	
	// public information member functions
	void complain(std::string level);

private:
	// private member functions
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
