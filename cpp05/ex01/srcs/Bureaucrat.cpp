/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:37:07 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 11:21:54 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{

    if (grade > 150)
        throw (Bureaucrat::GradeTooHighException());
    else if (grade < 1)
        throw (Bureaucrat::GradeTooLowException());
    this->_grade = grade;
    std::cout << "Const. de Bureaucrat : " << this->_name  << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &ori) : _name(ori.getName()), _grade(ori.getGrade())
{
    std::cout << "Const. de Bureaucrat : " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Dest. de Bureaucrat : " << this->_name << std::endl;
}

Bureaucrat         &Bureaucrat::operator=(Bureaucrat &ori)
{
    if (this != &ori)
        *this = ori;
    return (*this);
}

void                Bureaucrat::incrementGrade(int nb)
{
    if (this->_grade + nb > 150)
        throw(Bureaucrat::GradeTooHighException());
    if (this->_grade + nb < 1)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade += nb;
}

void                Bureaucrat::decrementGrade(int nb)
{
    if (this->_grade - nb > 150)
        throw(Bureaucrat::GradeTooHighException());
    if (this->_grade - nb < 1)
        throw(Bureaucrat::GradeTooLowException());
    this->_grade -= nb;
}



std::string const   Bureaucrat::getName(void) const
{
    return (this->_name);
}

int   Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

const char * Bureaucrat::Exepted::what() const throw()
{
    return ("Exeption detecter!");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("ho ! tu t'es pris pour l'ermite Rikudo !");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Desoler, mais vous n avez pas le nivaux pour etre ninja...");
}


std::ostream        &operator<<(std::ostream &o, Bureaucrat const &ori)
{
    (void)ori;
    o << ori.getName() << " a le grade " << ori.getGrade();
    return (o);
}