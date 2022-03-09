/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:45 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:45:41 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Robotomy_H
#define Robotomy_H
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
public :
	RobotomyRequestForm(std::string target); 
	~RobotomyRequestForm(void);
    virtual void    execute(Bureaucrat const & executor);
protected :
private :
	std::string _target;
};

#endif
