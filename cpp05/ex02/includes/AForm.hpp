/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:59:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:44:35 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_H
#define AForm_H
class Bureaucrat;
#include "Bureaucrat.hpp"

class AForm
{
public :
	AForm(std::string name, bool sign, int grade_sign, int grade_ex);
	~AForm(void);
	std::string 		getName(void);
	bool				getSign(void);
	int					getGrade_sign(void);
	int					getGrade_ex(void);
	void				beSigned(Bureaucrat &ori);
	AForm				&operator=(AForm &ori);
	class Exepted : public std::exception
	{
		public : 
			virtual const char * what() const throw();
	};
	class GradeTooHighException : public AForm::Exepted
	{
		public : 
			virtual const char * what() const throw();
	};
	class GradeTooLowException : public AForm::Exepted
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

std::ostream		&operator<<(std::ostream &o, AForm &ori);

#endif