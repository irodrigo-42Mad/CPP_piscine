/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:54:42 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/14 13:55:40 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

/*
** Constructor
*/
Dietary::Dietary()
{
	this->_count = 0;
}

/*
** Destructor
*/
Dietary::~Dietary(){}

void Dietary::info_message(void)
{
	std::cout << "# DIETARY" << std::endl;
	std::cout << "# select only this commands [HELP, ADD, SEARCH, EXIT]:" << std::endl;
}

void Dietary::new_contact(void)
{
	std::string elm;
	if (this->_count > 7)
		this->_count = 0;
	this->contacts[this->_count].set_info();
	this->_count++;
	this->_index++; // new line for element control.
}

void Dietary::show_search(void)
{
	int max;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	
	if (this->_index < 8)
		max = this->_index;
	else
		max = 8;
	for (int i = 0; i < max; i++)
		this->contacts[i].show_elm(i + 1);
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Dietary::search_contact(void)
{
	std::string elm;
	std::stringstream convert;
	int num;

	if (this->_count == 0)
		std::cout << "there are no contacts to search for! Add almost one contact first." << std::endl;
	else
	{
		system ("clear");
		Dietary::show_search();
		std::cout << "Search index: ";
		std::getline(std::cin, elm);
		convert << elm;
		convert >> num;
		if (this->_index >= num)
			this->contacts[num - 1].show(num);
		else
			std::cout << "\n" << "this contact in not present in phonebook" << std::endl;
	}
	std::cout << "press enter to continue..." << std::endl;
	std::cin.get();
}

void Dietary::set_help(void)
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "# DIETARYS HELP SYSTEM" << std::endl;
	std::cout << std::endl;
	std::cout << "# The dietary app permits use of following commands:" << std::endl;
	std::cout << std::endl;
	std::cout << "# HELP: Shows this command help screen." << std::endl;
	std::cout << "# ADD: Adds new contact to the dietary system" << std::endl;
	std::cout << "  up to 8 contacts, if number of contacts are upper " << std::endl;
	std::cout << "  than 8 the oldest contacts will be erased." << std::endl;
	std::cout << "  and new ones takes olders positions." << std::endl;
	std::cout << "# SEARCH: If dietary app has contacts in" << std::endl;
	std::cout << "  search option prompt about index to search " << std::endl;
	std::cout << "  and prints the result at screen." << std::endl;
	std::cout << "# EXIT: Exit from app and clean memory." << std::endl;
	std::cout << "  an exit message will be prompted " << std::endl;
	std::cout << std::endl;
	std::cout << "press enter to continue..." << std::endl;
	std::cin.get();
}

