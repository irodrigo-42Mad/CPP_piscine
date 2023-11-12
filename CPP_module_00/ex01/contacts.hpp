/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:10:39 by irodrigo          #+#    #+#             */
/*   Updated: 2022/08/23 13:37:35 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string		_f_name;
	std::string		_l_name;
	std::string		_nickName;
	std::string		_phone;
	std::string		_obscureSecret;
	//int				pos;

	// enum Field {
	// 	FirstName = 0,
	// 	LastName,
	// 	Nickname,
	// 	Phone,
	// 	ObscureSecret
	// };
	
public:
	/* Constructor and destructor */
	Contact();
	virtual 	~Contact();

	/* General phonebook functions */
	void		set_info();
	void		formatted(std::string data);
	void		show_elm(int index);
	void		show(int index);

	/* setter individual functions */
	void		set_FirstN(std::string f_name);
	void		set_LastN(std::string f_name);
	void		set_NickN(std::string nickName);
	void		set_Phone(std::string phone);
	void		set_ObscureSecret(std::string phone);
	
	/* getter individual functions */
	std::string get_FirstN(void) const;
	std::string get_LastN(void) const;
	std::string get_NickN(void) const;
	std::string get_Phone(void) const;
	std::string get_ObscureSecret(void) const;
};

#endif /* __CONTACTS_HPP__ */
