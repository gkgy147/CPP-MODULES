/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:55:02 by grobert           #+#    #+#             */
/*   Updated: 2023/08/29 20:48:06 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Streamed.hpp"
#include <fstream>

int main(int argc, char **argv)
{
    Streamed obj;
    // Check if the correct number of arguments have been passed
    if (argc != 4)
    {
        std::cerr << "Error: Incorrect number of arguments" << std::endl;
        return 1;
    }

    // Open the input file
    std::ifstream ifs(argv[1]);
    if (!ifs.is_open())
    {
        std::cerr << "Error: Unable to open input file" << std::endl;
        return 1;
    }

    // Perform the string replacement
    std::string result;
    std::string from = argv[2];
    std::string to = argv[3];

    std::getline(ifs, result, '\0');
    ifs.close();
    
    if (from != to){
    result = obj.ft_replace(result, from, to);
    // Open the output file
    std::string outFile = std::string(argv[1]) + ".replace";
    std::ofstream ofs(outFile.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Error: Unable to open output file" << std::endl;
        return 1;
    }

    // Write the modified string to the output file
    ofs << result;
    ofs.close();
    }

    return 0;
}
