/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:59:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:21:35 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
public :
	Form(std::string name, bool sign, int grade_sign, int grade_ex);
	~Form(void);
	std::string 		getName(void);
	bool				getSign(void);
	int					getGrade_sign(void);
	int					getGrade_ex(void);
	void				beSigned(Bureaucrat &ori);
	Form				&operator=(Form &ori);
	class Exepted : public std::exception
	{
		public : 
			virtual const char * what() const throw();
	};
	class GradeTooHighException : public Form::Exepted
	{
		public : 
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public Form::Exepted
	{
		public : 
			virtual const char * what() const throw();
	};
protected :
private :
	std::string const	_name;
	bool				_sign;
	int const			_grade_sign;
	int const			_grade_ex;
};

std::ostream		&operator<<(std::ostream &o, Form &ori);

#endif