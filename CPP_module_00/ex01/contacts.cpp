/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:34:33 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/14 11:22:27 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contacts.hpp"

/*
** Constructor
*/
Contact::Contact(){}

/*
** Destructor
*/
Contact::~Contact(){}

void Contact::set_info(void)
{
	std::string data;

	std::cout << "First Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_FirstN(data);
	std::cout << "Last Name:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_LastN(data);
	std::cout << "Nickname:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_NickN(data);
	std::cout << "Phone:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_Phone(data);
	std::cout << "Dark Secret:" << std::endl << ">> ";
	std::getline(std::cin, data);
	set_ObscureSecret(data);
}

/* setter functions */
void Contact::set_FirstN(std::string f_name)
{
	this->_f_name = f_name;
}

void Contact::set_LastN(std::string l_name)
{
	this->_l_name = l_name;
}

void Contact::set_NickN(std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::set_Phone(std::string phone)
{
	this->_phone = phone;
}

void Contact::set_ObscureSecret(std::string darkSecret)
{
	this->_obscureSecret = darkSecret;
}


/* getter functions */
std::string Contact::get_FirstN(void) const
{
	return (this->_f_name);
}

std::string Contact::get_LastN(void) const
{
	return (this->_l_name);
}

std::string Contact::get_NickN(void) const
{
	return (this->_nickName);
}

std::string Contact::get_Phone(void) const
{
	return (this->_phone);
}

std::string Contact::get_ObscureSecret(void) const
{
	return (this->_obscureSecret);
}


/* show data element functions */
void Contact::formatted(std::string data)
{
	if (data.length() > 9)
		std::cout << "|" << data.substr(0,9) << ".";
	else
		std::cout << "|" << std::setw(10) << data;
}

void Contact::show_elm(int index)
{
	std::cout << "|" << std::setw(10) << index;
	formatted(get_FirstN());
	formatted(get_LastN());
	formatted(get_NickN());
	std::cout << "|" <<std::endl; 
}

void Contact::show(int index)
{
	std::cout << index << std::endl;
	std::cout << this->get_FirstN() << std::endl;
	std::cout << this->get_LastN() << std::endl;
	std::cout << this->get_NickN() << std::endl;
	std::cout << this->get_ObscureSecret() << std::endl;
}
