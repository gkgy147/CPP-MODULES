/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:21:08 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 06:36:18 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat bureaucrat("Selvam", 1);
        Bureaucrat bureaucrat1("Rasheedh", 150);

        std::cout << bureaucrat << std::endl;
        std::cout << bureaucrat1 << std::endl;

        bureaucrat.incrementGrade();
        bureaucrat1.decrementGrade();
    } 
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat bureaucrat2("thankam", 150);

        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.decrementGrade();
    } 
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    
    try {
        Bureaucrat b("Test", 75);
        Bureaucrat a(b);

        try {
            b.decrementGrade();
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        std::cout << b << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Grade out of range: " << e.what() << std::endl;
    }

    return 0;
}
