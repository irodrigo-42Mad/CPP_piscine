/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:27:03 by irodrigo          #+#    #+#             */
/*   Updated: 2023/06/26 12:12:05 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <utility>
# include <ctime>

class BitcoinExchange{
	private:
		int _Key;
		float _Value;
		std::map<int, float> _MyMap;

	public:
		BitcoinExchange(); 
		BitcoinExchange(BitcoinExchange &);
		~BitcoinExchange();
		BitcoinExchange &operator=(BitcoinExchange const &);
	
		// setters and getters
		void SetPrimaryMapValue(float key, float value);
		void SetDataMapValue(float key, float value);
		void GetMapValue(std::string mydata);

		// public functions
		int fileDataLoad(std::string path);
		bool check_Date(std::string date) const;
		std::string convertDate(int actDate);
		void check_Map_value (int, float);
		bool check_text (std::string elm) const;
		bool tiene_letras (std::string texto);
		
		



		// bool check_line (std::string data) const; 
		// int date_to_int(const std::string& date_str);
		// double date_to_dbl(const std::string& date_str);
		// exceptions needed
		
		
};

#endif
