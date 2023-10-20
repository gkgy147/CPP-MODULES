/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:53:23 by grobert           #+#    #+#             */
/*   Updated: 2023/10/13 02:49:47 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::_db = BitcoinExchange::uploadDB("data.csv");

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &be)
{
	(void)be;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &be)
{
	if (this == &be)
		return *this;
	
	(void)be;
	return (*this);
}

bool	BitcoinExchange::isValidDate(int d, int m, int y)
{
	if (y < 2009 || y > 2023)
		return (false);
	if (m < 1 || m > 12)
		return (false);
	if (d < 1 || d > 31)
		return (false);
	if ((m == 2) && (y == 2012 || y == 2016 || y == 2020) && (d <= 29))
		return (true);
	if ((m == 4 || m == 6 || m == 9 || m == 11) && (d <= 30))
		return (true);
	return true;
}

std::map<std::string, double> BitcoinExchange::uploadDB(std::string const &path)
{
    std::ifstream data(path.c_str());
    if (!data) {
        throw BitcoinExchange::InvalidDB();
    }

    std::map<std::string, double> db;
    std::string line;

    // Read the header line (date,exchange_rate)
    if (!std::getline(data, line) || line != "date,exchange_rate") {
        throw BitcoinExchange::InvalidDB();
    }

    while (std::getline(data, line) && !line.empty()) {
        // Split the line into date and exchange_rate
        std::string date;
        double exchange_rate;

        size_t pos = line.find(',');
        if (pos == std::string::npos) {
            throw BitcoinExchange::InvalidDB();
        }

        date = line.substr(0, pos);
        exchange_rate = atof(line.substr(pos + 1).c_str());

        // Validate and add the data to the map
        int year, month, day;
        if (sscanf(date.c_str(), "%4d-%2d-%2d", &year, &month, &day) != 3 ||
            !BitcoinExchange::isValidDate(day, month, year) ||
            exchange_rate < 0) {
            throw BitcoinExchange::InvalidDB();
        }

        db[date] = exchange_rate;
    }

    data.close();
    return db;
}

double const &BitcoinExchange::getPrice(std::string const &date) {
    std::map<std::string, double>::const_iterator it = BitcoinExchange::_db.find(date);
    if (it != BitcoinExchange::_db.end()) {
        return it->second;
    }
    it = BitcoinExchange::_db.lower_bound(date);
    if (it != BitcoinExchange::_db.end()) {
        return it->second;
    }
    throw std::runtime_error("Date not found.");
}

void BitcoinExchange::exchange(std::string const &path) 
{
    std::ifstream data(path.c_str());
    if (!data) {
        throw BitcoinExchange::InvalidInputFile();
    }

    std::string line;
    std::string date;
    int year, month, day;
    double value;

    while (std::getline(data, line)) {
        if (line == "date | value") {
            break;
        } else {
            throw BitcoinExchange::InvalidInputFile();
        }
    }

    while (std::getline(data, line) && !line.empty()) {
        if (line.find(" | ") == std::string::npos) {
            date = line.substr(0, line.size());
        } else {
            date = line.substr(0, line.find(" | "));
        }

         if (line.size() <= 10 || line[4] != 45 || line[7] != 45 || line[10] != 32 ||
            line[11] != '|' || line[12] != 32) {
            std::cout << "Error: bad input => " << (line.size() <= 10 ? date : line) << std::endl;
            continue;
        }

        if (sscanf(date.c_str(), "%4d-%2d-%2d", &year, &month, &day) != 3) {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }

        if (!BitcoinExchange::isValidDate(day, month, year)) {
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }

       value = atof(line.substr(13).c_str());


        if (value < 0) {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }

        if (value > 1000) {
            std::cout << "Error: too large number." << std::endl;
            continue;
        }

        std::cout << date << " => " << value << " = " << value * BitcoinExchange::getPrice(date) << std::endl;
    }

    data.close();
}
