/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:55:39 by irodrigo          #+#    #+#             */
/*   Updated: 2023/09/14 13:40:32 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

void PmergeMe::loadStructs(int counter, char **value)
{
	int nval = 0;
	
	std::cout << std::endl << "generating unordered structs: ";
	for (register int i = 1; i < counter; i++)
	{
		nval = atoi(value[i]);
		if (nval > INT_MAX)
		{
			// debemos comprobar correctamente el rango de los enteros
			std::cout << "Value provided out of int valid range" << std::endl;
			exit(-1);
		}
		this->my_vector.push_back(nval);
		this->my_list.push_back(nval);
	}
	std::cout << "\033[1;32mSuccesfull\033[0m loaded " << counter - 1 << " elements." << std::endl << std::endl;
}

void PmergeMe::mergeInsertionSort (int type)
{
	int nval = -1;
	if (type == VCT)
	{
		// Vector ordering
		std::vector<int>::iterator it1, it2;
		for (it1 = this->my_vector.begin() + 1; it1 != this->my_vector.end(); ++it1)
		{
			nval = *it1;
        	it2 = it1;
			while (it2 != this->my_vector.begin() && *(std::prev(it2)) > nval)
			{
				*it2 = *(std::prev(it2));
            	std::advance(it2, -1);
			}
			*it2 = nval;
		}
	}
	else
	{
		// list ordering
		std::list<int>::iterator itl1, itl2;
		for (itl1 = ++this->my_list.begin(); itl1 != this->my_list.end(); ++itl1)
		{
			nval = *itl1;	
			itl2 = itl1;
			while (itl2 != this->my_list.begin() && *(std::prev(itl2)) > nval)
			{
				*itl2 = *(std::prev(itl2));
            	std::advance(itl2, -1);
			}
			*itl2 = nval;
		}
	}
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
	{
		std::cout << std::endl << "After PMerge: " << std::endl;
		std::cout << "\t std::list: \t" ;
		this->getlist(my_list);
		std::cout << "\t std::vector: \t";
		this->getlist(my_vector);
		std::cout << std::endl;

	}
}

void PmergeMe::mergeOrder (int type)
{
	// obtengo el current time inicial
	// ordeno los elemmentos siguiendo ford jhonson
	if (type == VCT)
	{
		_start = clock();  // tomamos referencia inicial de tiempos para vector
		// ordenamos el vector y tomamos diferencias de tiempos
		this->mergeInsertionSort(VCT);
		//this->mergeInsertionSort(type);
	}
	else
	{
		_start = clock();
		// ordenamos la cola y tomamos las diferencias de tiempos
		this->mergeInsertionSort(LST);
		//std::cout << "prueba2 " << _start << std::endl;	
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
