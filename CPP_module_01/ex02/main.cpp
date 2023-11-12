/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 10:54:38 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** program that prints variable content and compares with next data elements
**
**   * string ptr that point to original variable direction
**   & string reference that contains direction of original str
**   including \n (newline) characters for easy reading
*/

int main (void)
{
	std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str variable content: " << str << std::endl;
    std::cout << "str memory direction: " << &str << std::endl << std::endl;
    std::cout << "stringPTR memory pointed direction: " << stringPTR << std::endl;
    std::cout << "stringREF memory direction: " << &stringREF << std::endl << std::endl;;
    std::cout << "content of *stringPTR var: " << *stringPTR << std::endl;
    std::cout << "content of &stringREF var: " << stringREF << std::endl;
    return(0);
}
