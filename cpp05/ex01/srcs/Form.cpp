/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:58:46 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 16:49:52 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Form.hpp"

Form::Form(std::string name, bool sign, int grade_sign, int grade_ex) : _name(name), _sign(sign), _grade_sign(grade_sign), _grade_ex(grade_ex)
{
	if (grade_sign > 150 || grade_ex > 150)
		throw(Form::GradeTooHighException());
	else if (grade_sign < 1 || grade_ex < 1)
		throw(Form::GradeTooLowException());
	else
		std::cout << "Const. du formulaire " << this->_name << std::endl;
}

Form::~Form(void)
{
	std::cout << "Dest. du formulaire " << this->_name << std::endl;
}

std::string Form::getName(void)
{
	return (this->_name);
}

bool Form::getSign(void)
{
	return (this->_sign);
}

int Form::getGrade_sign(void)
{
	return (this->_grade_sign);
}

int Form::getGrade_ex(void)
{
	return (this->_grade_ex);
}

void	Form::beSigned(Bureaucrat &ori)
{
	if (ori.getGrade() < this->_grade_sign)
		throw (Form::GradeTooLowException());
	else
		this->_sign = true;
}

Form			&Form::operator=(Form &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Form &ori)
{
	o << "Formulaire \t\t: " << ori.getName() << std::endl << "Etat \t\t\t: " << ori.getSign() << std::endl << "Grade de sign \t\t: " << ori.getGrade_sign() << std::endl << "Grade d ex \t\t: " << ori.getGrade_ex();
	return (o);
}

const char * Form::Exepted::what() const throw()
{
    return ("Exeption detecter!");
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("ho ! tu t'es pris pour l'ermite Rikudo !");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Desoler, mais vous n avez pas le nivaux pour etre ninja...");
}