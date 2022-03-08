/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrate.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:37:07 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 11:21:54 by mbonnet          ###   ########.fr       */
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
    std::cout << "Const. de bureaucrate : " << this->_name  << std::endl;
}

Bureaucrate::Bureaucrate(Bureaucrate &ori) : _name(ori.getName()), _grade(ori.getGrade())
{
    std::cout << "Const. de bureaucrate : " << this->_name << std::endl;
}

Bureaucrate::~Bureaucrate(void)
{
    std::cout << "Dest. de bureaucrate : " << this->_name << std::endl;
}

Bureaucrate         &Bureaucrate::operator=(Bureaucrate &ori)
{
    if (this != &ori)
        *this = ori;
    return (*this);
}

void                Bureaucrate::incrementGrade(int nb)
{
    if (this->_grade + nb > 150)
        throw(Bureaucrate::GradeTooHighException());
    if (this->_grade + nb < 1)
        throw(Bureaucrate::GradeTooLowException());
    this->_grade += nb;
}

void                Bureaucrate::decrementGrade(int nb)
{
    if (this->_grade - nb > 150)
        throw(Bureaucrate::GradeTooHighException());
    if (this->_grade - nb < 1)
        throw(Bureaucrate::GradeTooLowException());
    this->_grade -= nb;
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
    return ("ho ! tu t'es pris pour l'ermite Rikudo !");
}

const char * Bureaucrate::GradeTooLowException::what() const throw()
{
    return ("Desoler, mais vous n avez pas le nivaux pour etre ninja...");
}


std::ostream        &operator<<(std::ostream &o, Bureaucrate const &ori)
{
    (void)ori;
    o << ori.getName() << " a le grade " << ori.getGrade();
    return (o);
}