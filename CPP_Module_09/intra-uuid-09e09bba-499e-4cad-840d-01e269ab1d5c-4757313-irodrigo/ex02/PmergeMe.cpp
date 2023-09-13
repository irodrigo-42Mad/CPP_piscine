/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:55:39 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/13 13:58:40 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

void PmergeMe::loadStructs(std::string line_elm)
{
	std::stringstream ss(line_elm);
    std::string token;
	char tmp[25];

	std::cout << std::endl << "generating unordered structs: ";
	while (getline(ss, token, ' '))
    {
		int i = 0;
		while (token[i] != '\0')
		{	
			std::strcpy(tmp, &token[i]);
			i++;
		}
		this->my_vector.push_back(std::atoi(tmp));
		this->my_list.push_back(std::atoi(tmp));
	}
	std::cout << "\033[1;32mSuccesfull\033[0m loaded." << std::endl << std::endl;
}
		
void PmergeMe::display(int moment)
{
	if (moment== FIRST)
	{
		std::cout << "Before: " << std::endl;
		std::cout << "\t std::list: \t" ;
		this->getlist(my_list);
		std::cout << "\t std::vector: \t";
		this->getlist(my_vector);
		std::cout << std::endl;
	}
	if (moment == LAST)
		std::cout << "hola esto es una prueba " << std::endl;
}




// void PmergeMe::getlist(int moment, std::string line_elm)
// {
// 	std::vector<int>::iterator ite = my_vector.end();
// 	std::list<int>::iterator ilte = my_list.end();
// 	// listamos los elementos que previamente se han colocado en la lista y el vector
// 	if (moment == FIRST)
// 		std::cout << "Before: " << line_elm << std::endl;
// 	else
// 	{
// 		std::cout << std::endl << "elements after ordering" << std::endl;
// 		// list ordered vector elements.
// 		std::cout << "After using <vector> : " ;
// 		for (std::vector<int>::iterator it = my_vector.begin();it !=ite; it++)
// 			std::cout << *it << " ";

// 		std::cout << std::endl;
// 		// list ordered list elements.
// 		std::cout << "After using <list> : " ;
// 		for (std::list<int>::iterator ilt = my_list.begin(); ilt !=ilte; ilt++)
// 			std::cout << *ilt << " ";

// 		std::cout << std::endl;
// 	}
// 	// debemos revisar el último elemento de la lista y el vector para que no muestre un espacio extra.
// }

void PmergeMe::mergeOrder (int type)
{
	// obtengo el current time inicial
	// ordeno los elemmentos siguiendo ford jhonson
	if (type == VCT)
	{
		_start = clock();  // tomamos referencia inicial de tiempos para vector
		// ordenamos el vector y tomamos diferencias de tiempos
		std::cout << "prueba1" << std::endl;
		//this->mergeInsertionSort(type);
	}
	else
	{
		_start = clock();
		// ordenamos la cola y tomamos las diferencias de tiempos
		std::cout << "prueba2 " << _start << std::endl;	
		//this->mergeInsertionSort(type);
	}
}

// void mergeInsertionSort(int type)
// {
// 	if (type = VCT)
// 		std::list<int>::iterator it1, it2;
// 	else
// 	{
// 		std::list<int>::iterator it1, it2;



// 	}	
		


// 	for (it1 = ++arr.begin(); it1 != arr.end(); ++it1)
//     {
//         int temp = *it1;
//         it2 = it1;
//         while (it2 != arr.begin() && *(std::prev(it2)) > temp)
//         {
//             *it2 = *(std::prev(it2));
//             std::advance(it2, -1);
//         }
//         *it2 = temp;
//     }
// }
template <typename T>
void PmergeMe::getlist (const T& elm)
{
	typename T::const_iterator it;
    for (it = elm.begin(); it != elm.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

}

void PmergeMe::getTime(int type)
{
	//obtengo el gettime final y muestro lo que tarda
	double time;
	double time2;
	if (type == VCT)
	{
		_end = clock();
		time = static_cast<double>(_end - _start) / CLOCKS_PER_SEC * 1000;
    	std::cout << "Time to process a range of " << this->my_vector.size() << " elements with std::vector container: " << time << " us" << std::endl;
	}
	else
	{
		_end = clock();
		time2 = static_cast<double>(_end - _start) / CLOCKS_PER_SEC * 1000;
	    std::cout << "Time to process a range of " << this->my_list.size() << " elements with std::list container: " << time2 << " us" << std::endl;
	}
}
