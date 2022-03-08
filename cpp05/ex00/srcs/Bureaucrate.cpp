/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:37:07 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 10:07:06 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrate::Bureaucrate(std::string name, int grade) : _name(name)
{

    if (grade > 150)
        throw (Bureaucrate::GradeTooHighException());
    else if (grade < 1)
        throw (Bureaucrate::GradeTooLowException());
    this->_grade = grade;
    std::cout << VERT << "Const. de bureaucrate : " << this->_name << BLANC << std::endl;
}

Bureaucrate::Bureaucrate(Bureaucrate &ori) : _name(ori.getName()), _grade(ori.getGrade())
{
    std::cout << VERT << "Const. de bureaucrate : " << this->_name << BLANC << std::endl;
}

Bureaucrate::~Bureaucrate(void)
{
    std::cout << VERT << "Desst. de bureaucrate : " << this->_name << BLANC << std::endl;
}

Bureaucrate         &Bureaucrate::operator=(Bureaucrate &ori)
{
    if (this != &ori)
        *this = ori;
    return (*this);
}

std::string const   Bureaucrate::getName(void) const
{
    return (this->_name);
}

int   Bureaucrate::getGrade(void) const
{
    return (this->_grade);
}

const char * Bureaucrate::Exepted::what() const throw()
{
    return ("Exeption detecter!");
}

const char * Bureaucrate::GradeTooHighException::what() const throw()
{
    return ("ho ! tu t'es pris pour Nick Fury !");
}

const char * Bureaucrate::GradeTooLowException::what() const throw()
{
    return ("Desoler, mais nous ne faisons pas de sous merde...");
}