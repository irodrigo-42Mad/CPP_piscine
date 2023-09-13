/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irodrigo <irodrigo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:27:10 by irodrigo          #+#    #+#             */
/*   Updated: 2023/06/26 12:33:46 by irodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
* El ejercicio crea la clase bitcoin en la cual los datos contenidos en el csv 
* son cargados en un mapa ordenado una vez convertidos a los correspondientes 
* correctos en este momento, se lee un fichero de la entrada estandar con el 
* nombre que queramos, si el fichero es correcto, tenemos que buscar la fecha 
* más cercana a una de las fechas dadas y multiplicar el numero de bitcoins ob
* tenidos por la cotizacion existente ese dia devolviendo el resultado.
*
* si en el fichero no existe una fecha correcta se devolverá error de fecha
* si en el fichero no existe una cantidad correcta, se devolverá error de cantidad
* si todo es correcto, se devolverá un mensaje indicando la cantidad que tenemos 
* existente en el fichero.
*/

// constructor destructor and copy constructor
BitcoinExchange::BitcoinExchange()
{
	std::string linea;
	std::string data;

	// read initial database file
	std::ifstream archivo("data.csv");
	// check if file can be readed
	if (archivo.fail())
		std::cerr << "Error: " << strerror(errno) << std::endl;
	else
	{
		// read and discard titles
		getline(archivo, linea);
		// read file line
		while (getline(archivo, linea))
		{
			// Using stringstream to threat file separators
			std::stringstream input_stringstream(linea);
			// take filedata as previous situation
			getline(input_stringstream, data, ',');
			// check date validation and data not empty
			if (!data.empty() && check_Date(data))
			{
				data.erase(std::remove(data.begin(), data.end(), '-'), data.end());
				this->_Key = std::atoi(data.c_str());
			}
			//subst next line
			/*this->_Key = this->date_to_int(data); */
			getline(input_stringstream,data, '\n');
			if (!tiene_letras(data.c_str()))
			{
				// incluirlos en el mapa inicial
				this->_Value = std::strtof(data.c_str(), NULL);
				this->SetPrimaryMapValue(this->_Key, this->_Value);
			}
			else
				std::cerr << "el valor contiene carácteres no válidos" << std::endl;
				
		}
		std::cout << "data.CSV File initialization correct all registers has loaded." << std::endl << std::endl;
	}
}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(BitcoinExchange &elm_cpy) 
{	
	*this = elm_cpy;
}

// Equal operator overload
BitcoinExchange&	BitcoinExchange::operator = (BitcoinExchange const &toCopy)
{
 	this->_MyMap = toCopy._MyMap;
 	return *this;
}

// setters and getters
// set primary map value
void BitcoinExchange::SetPrimaryMapValue(float key, float value)
{
	this->_MyMap[key] = value;
}

// comparison between map values and file values.
void BitcoinExchange::check_Map_value(int key, float value)
{
	std::map<int, float>::iterator itlow, itup;
	int i = 0;

	for (itlow =this->_MyMap.begin(); itlow != this->_MyMap.end(); ++itlow)
	{
		if (itlow->first > key)
		{
			if (i > 0)
				--itlow;
			break;
		}
		i++;
	}
	if (itlow->first > key)
	{
		std::cerr << "Error: Date has previous to first file value" << std::endl;
		return;
	}
	else
	{	
		if (value <= 1000)
		{
			std::string my_year;
			std::string my_month;
			std::string my_day;
			std::stringstream ss;

			ss << key;
			ss >> my_year;
			my_month = my_day = my_year;
			my_year = my_year.substr(0,4);
			my_month = my_month.substr(4,2);
			my_day = my_day.substr(6);
			std::cout << my_year << "-" << my_month << "-" << my_day << " => " << value << " = " << (itlow->second * value) << std::endl;
		}
	}
}

bool    BitcoinExchange::check_Date(std::string date) const
{
	int     year = 0, month = 0, day = 0;
	int		status;

	status = 0;
    tm time_date;
    time_t uni_time;
    std::string m_date = date;
    memset(&time_date, 0, sizeof(tm));
    strptime(date.c_str(),"%Y-%m-%d", &time_date);
    uni_time = mktime(&time_date);
    time_date = *localtime(&uni_time);
	if (check_text(date) != true)
		return false;
	year = std::atoi(std::strtok(const_cast<char *>(m_date.c_str()), "-"));
	month = std::atoi(std::strtok(NULL, "-"));
	day = std::atoi(std::strtok(NULL, "-"));
	if ((time_date.tm_year + 1900 == year) && (time_date.tm_mon + 1 == month) && (time_date.tm_mday == day))
        return true;
    std::cout << "Error: bad imput => " << date << std::endl;
    return false;
}

int BitcoinExchange::fileDataLoad(std::string path)
{
	std::string linea;
	std::string data;
	int line;
	int status;
		
	std::ifstream d_input(path);
	if (d_input.fail())
		std::cerr << "Error: " << strerror(errno) << std::endl;
	else
	{
		line = 0;
		getline(d_input, linea);
		while (getline(d_input, linea))
		{
			status = 0;
			line++;
			// divide elements in key values
			std::stringstream input_stringstream(linea);
			getline(input_stringstream, data, '|');
			if (check_Date(data) == false)
				status = 3;
			else
			{
				if (!data.empty())
				{
					data.erase(std::remove(data.begin(), data.end(), '-'), data.end());
					this->_Key = std::atoi(data.c_str());
				}
				else
				{
					std::cerr << data << " Error: bad date in line " << line << "." << std::endl;
					status = 1;
				}

				getline(input_stringstream, data, '\n');
				if (tiene_letras (data.c_str()))
				{
					std::cerr << data << " Error: bad value quantity in line " << line << "." << std::endl;
					status = 4;
				}	
				this->_Value = std::strtof(data.c_str(), NULL);
				if (this->_Value < 0 || this->_Value > 1000)
				{
					std::cerr << "Error: not valid quantity value " << line << "." << std::endl;
					status = 2;
				}
			}
			// checkear el valor del mapa
			if (status == 0)
			{
				this->check_Map_value(this->_Key, this->_Value);
			}
		}
	}
	std::cout << "Correct data file check " << this->_MyMap.size() << " registers has checked succesfully." << std::endl;
	return (0);
}

bool BitcoinExchange::check_text (std::string elm) const
{
	int count;
	int pos;

	count = 0;
	pos = 0;
	while (elm[pos]!= '\0')
	{
		if ((elm[pos] == '-' && pos == 4) || (elm[pos] == '-' && pos == 7))
			count++;
		pos++;
	}
	if (count != 2)
		return false;
	return true;
}

bool BitcoinExchange::tiene_letras(std::string texto)
{
   	int i = 0;

	while (texto[i] == ' ' || texto[i] == '	')
		i++;

	while (texto[i] != '\0')
	{
		if (!isdigit(texto[i]) && texto[i] != '.' && texto[i] != '\n')
			return true;
		i++;   	
  	}
   	return false;
}
