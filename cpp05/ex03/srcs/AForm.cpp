/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:58:46 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:44:35 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/AForm.hpp"   

AForm::AForm(std::string name, bool sign, int grade_sign, int grade_ex) : _name(name), _sign(sign), _grade_sign(grade_sign), _grade_ex(grade_ex)
{
	if (grade_sign > 150 || grade_ex > 150)
		throw(AForm::GradeTooHighException());
	else if (grade_sign < 1 || grade_ex < 1)
		throw(AForm::GradeTooLowException());
	else
		std::cout << "Const. du AForm \"" << this->_name << "\"" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Dest. du AForm \"" << this->_name << "\""<< std::endl;
}

std::string AForm::getName(void)
{
	return (this->_name);
}

bool AForm::getSign(void)
{
	return (this->_sign);
}

int AForm::getGrade_sign(void)
{
	return (this->_grade_sign);
}

int AForm::getGrade_ex(void)
{
	return (this->_grade_ex);
}

void	AForm::beSigned(Bureaucrat &ori)
{
	if (ori.getGrade() < this->_grade_sign)
		throw (AForm::GradeTooLowException());
	else
	{
		this->_sign = true;
		std::cout << "signature effectuer par : " << ori.getName() << std::endl;
	}
}

AForm			&AForm::operator=(AForm &ori)
{
	if (this != &ori)
		*this = ori;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, AForm &ori)
{
	o << "AFormulaire \t\t: " << ori.getName() << std::endl << "Etat \t\t\t: " << ori.getSign() << std::endl << "Grade de sign \t\t: " << ori.getGrade_sign() << std::endl << "Grade d ex \t\t: " << ori.getGrade_ex();
	return (o);
}

const char * AForm::Exepted::what() const throw()
{
    return ("Exeption detecter!");
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return ("ho ! tu t'es pris pour l'ermite Rikudo !");
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return ("Desoler, mais vous n avez pas le nivaux pour etre ninja...");
}

const char * AForm::NoSignException::what() const throw()
{
    return ("Desoler, mais se formulaire n as pas etait signer...");
}