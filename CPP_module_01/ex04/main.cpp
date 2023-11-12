/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 13:58:30 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sed.hpp"

// del ejercicio 4 hay que hacer el procedimiento para sustituir la cadena en el
// archivo de entrada. todo lo demás está funcional


int main (int argc, char **argv)
{
	std::string S1 = std::string(argv[2]);
	std::string S2 = std::string(argv[3]);
	std::ifstream f_in;
    std::ofstream f_out;
	std::string o_name;
	std::string contents;

	if (argc != 4)
    {
        std::cout << "Error: Argument number incorrect" << std::endl;
		std::cout << "Exercise 04 <filename> <string 1> <string 2>" << std::endl;
        return (-1);
   	}
	if (S1.length() == 0 || S2.length() == 0)
	{
	    std::cout << "Error string length invalid" << std::endl;
		return (-1);	
	}
    f_in.open(argv[1]);
    if (!f_in.is_open())
	{
		std::cout << "Error: file not exist, has corrupted or don´t has enought rights" << std::endl;
		return (-1);
	}
	contents = getfile(f_in);;
	f_in.close();
	find_and_replace(contents, S1, S2);
	o_name = argv[1];
	f_out.open(o_name.append(".replace"), std::ofstream::out);
	if (!f_out.is_open())
	{
		std::cout << "Error: File corrupted, inaccesible or you don´t jas enought rights" << std::endl;
		return(-1);
	}
	f_out << contents;
	f_out.close();
	return (0);
}
