/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:35 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:43:36 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp" 
#include <stdlib.h> 
#include <iostream>


//#include <random>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("formulaire de demande de robotomie", false, 72, 45), _target(target)
{
	std::cout  <<"Le formulaire : " << this->getName() << " a etait creer" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout  << "Le formulaire : " << this->getName() << " a etait detruit"  << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor)
{
    (void)executor;
    if (executor.getGrade() < this->getGrade_ex())
        throw(AForm::GradeTooHighException());
    if (this->getSign() == false)
        throw(AForm::NoSignException());
    std::cout << "BBVvvrrrrrrrrrr ! " << std::endl;
    std::srand(std::time(NULL));
    if (rand() % 2 == 0)
        std::cout << VERT << "La lobotomie de " << this->_target << " a etait realiser avec sucess !" << BLANC << std::endl;
    else
        std::cout << ROUGE << "La lobotomie de " << this->_target << " a echouer !" << BLANC << std::endl;
}
 