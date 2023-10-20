/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:21:08 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 10:54:02 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    try {
        ShrubberyCreationForm shrubForm("Garden");
        Bureaucrat bureaucrat1("Alice", 1);

        std::cout << "--------------- Shrubbery Form ---------------" << std::endl;
        bureaucrat1.signForm(shrubForm);
        bureaucrat1.executeForm(shrubForm);
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
       RobotomyRequestForm robotForm("Robots");

        Bureaucrat bureaucrat2("Bob", 45);

        std::cout << "--------------- Robotomy Form ---------------" << std::endl;
        bureaucrat2.signForm(robotForm);
        bureaucrat2.executeForm(robotForm);
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        PresidentialPardonForm pardonForm("Pardon");

        Bureaucrat bureaucrat3("Charlie", 5);

        std::cout << "--------------- Presidential Pardon Form ---------------" << std::endl;
        bureaucrat3.signForm(pardonForm);
        bureaucrat3.executeForm(pardonForm);
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}



/*int main(void) {
    try {
        ShrubberyCreationForm shrubForm("Garden");
        RobotomyRequestForm robotForm("Robots");
        PresidentialPardonForm pardonForm("Pardon");

        Bureaucrat bureaucrat1("Alice", 1);
        Bureaucrat bureaucrat2("Bob", 50);
        Bureaucrat bureaucrat3("Charlie", 100);

        std::cout << "--------------- Shrubbery Form ---------------" << std::endl;
        bureaucrat1.signForm(shrubForm);
        bureaucrat1.executeForm(shrubForm);
        bureaucrat2.signForm(shrubForm);
        bureaucrat2.executeForm(shrubForm);
        bureaucrat3.signForm(shrubForm);
        bureaucrat3.executeForm(shrubForm);

        std::cout << "--------------- Robotomy Form ---------------" << std::endl;
        bureaucrat1.signForm(robotForm);
        bureaucrat1.executeForm(robotForm);
        bureaucrat2.signForm(robotForm);
        bureaucrat2.executeForm(robotForm);
        bureaucrat3.signForm(robotForm);
        bureaucrat3.executeForm(robotForm);

        std::cout << "--------------- Presidential Pardon Form ---------------" << std::endl;
        bureaucrat1.signForm(pardonForm);
        bureaucrat1.executeForm(pardonForm);
        bureaucrat2.signForm(pardonForm);
        bureaucrat2.executeForm(pardonForm);
        bureaucrat3.signForm(pardonForm);
        bureaucrat3.executeForm(pardonForm);
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}*/