/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:38 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:43:40 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp" 

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("formulaire de pardon presidenciel", false, 25, 5), _target(target)
{
	std::cout  <<"Le formulaire : " << this->getName() << " a etait creer"  << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Le formulaire : " << this->getName() << " a etait detruit" << std::endl;
}
 

void    PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    if (executor.getGrade() < this->getGrade_ex())
        throw(AForm::GradeTooHighException());
    if (this->getSign() == false)
	{
        throw(AForm::NoSignException());
	}
	std::cout << VERT << "Nous vous informons que M " << this->_target << " a etait gracier par le Hokage !" << BLANC << std::endl;
}