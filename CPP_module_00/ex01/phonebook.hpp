/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:04:03 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/14 11:19:42 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DIETARY_H__
# define __DIETARY_H__

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "contacts.hpp"

class Dietary
{
private:
	
	int		_count;
	int		_index;
		
public:
	Contact	contacts[8];
	Dietary();
	virtual ~Dietary();

	void	info_message(void);
	void	new_contact(void);
	void	search_contact(void);
	void	show_search(void);
	void	set_help(void);
};

#endif /* __DIETARY_H__ */
