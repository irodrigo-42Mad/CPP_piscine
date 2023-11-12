/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:12:19 by irodrigo          #+#    #+#             */
/*   Updated: 2022/09/19 13:59:10 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "sed.hpp"

/*
** Function that reads whole filein content
*/

std::string getfile(std::ifstream& is) {
  std::string contents;
  for (char ch; is.get(ch); contents.push_back(ch)) {}
  return contents;
}

/*
**  This searches the file for the first occurence of the string.
**  and continue search and replace from the first ocurrence
*/

void find_and_replace(std::string& file_contents,
    const std::string& S1, const std::string& S2) {
	size_t l1;
	size_t l2;
	size_t pos;

	l1 = S1.length();
	l2 = S2.length();
	while ((pos = file_contents.find(S1)) != std::string::npos)
	{
		file_contents.erase(pos, l1);
		file_contents.insert(pos, S2);
		pos += l2;
	}
}
