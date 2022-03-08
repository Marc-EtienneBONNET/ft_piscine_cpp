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

PresidentialPardonAForm::PresidentialPardonAForm(std::string &target)
: _target(target), AForm("formulaire de pardon presidenciel", false, 25, 5)
{
	std::cout << JAUNE <<"Le formulaire : " << this->getName() << " a etait creer" << BLANC << std::endl;
}

PresidentialPardonAForm::~PresidentialPardonAForm(void)
{
	std::cout << JAUNE << "Le formulaire : " << this->getName() << " a etait detruit" << BLANC << std::endl;
}


