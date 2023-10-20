/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:21:08 by grobert           #+#    #+#             */
/*   Updated: 2023/10/14 09:09:31 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    try {
        Bureaucrat bureaucrat("Shashi", 5);
        Bureaucrat bureaucrat2("Rasheedh", 145);

        for (int i = 0; i < 4; i++)
            bureaucrat.incrementGrade();
        for (int i = 0; i < 5; i++)
            bureaucrat2.decrementGrade();

        try {
            bureaucrat.incrementGrade();
        } catch (std::exception &e) {
            std::cout << "INC exception caught" << std::endl;
        }

        try {
            bureaucrat2.decrementGrade();
        } catch (std::exception &e) {
            std::cout << "DEC exception caught" << std::endl;
        }

        try {
            Bureaucrat bureaucrat3("Test", 0);
        } catch (std::exception &e) {
            std::cout << "INV_CON exception caught" << std::endl;
        }

        try {
            Bureaucrat bureaucrat4("Test", 151);
        } catch (std::exception &e) {
            std::cout << "INV_CON exception caught" << std::endl;
        }

        Form form("FormName", 10, 15);

        std::cout << form << std::endl;
        bureaucrat.signForm(form);
        bureaucrat2.signForm(form);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
