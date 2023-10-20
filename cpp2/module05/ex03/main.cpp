/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:21:08 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 15:34:25 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main(void)
{
    try
    {
        Intern intern;
        // Test ShrubberyCreationForm
        AForm *form1 = intern.makeForm("shrubbery request", "home");
        Bureaucrat bureaucrat1("Bob", 136);
        Bureaucrat bureaucrat2("Jhon", 145);
        bureaucrat2.signForm(*form1);
        bureaucrat1.executeForm(*form1);
        bureaucrat2.executeForm(*form1);
        delete form1;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Intern intern;
        // Test RobotomyRequestForm
        AForm *form2 = intern.makeForm("robotomy request", "home");
        Bureaucrat bureaucrat3("Bob2", 44);
        Bureaucrat bureaucrat4("Jhon2", 72);
        bureaucrat4.signForm(*form2);
        bureaucrat3.executeForm(*form2);
        bureaucrat4.executeForm(*form2);
        delete form2;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        Intern intern;
        // Test PresidentialPardonForm
        AForm *form3 = intern.makeForm("PresidentialPardonForm", "home");
        Bureaucrat bureaucrat5("Bob3", 5);
        Bureaucrat bureaucrat6("Jhon3", 24);
        bureaucrat6.signForm(*form3);
        bureaucrat5.executeForm(*form3);
        bureaucrat6.executeForm(*form3);
        delete form3;
    }
    catch (std::exception &e)
    {
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