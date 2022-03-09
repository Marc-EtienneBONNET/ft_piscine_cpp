/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:47 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:45:36 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Shrubbery_H
#define Shrubbery_H 
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm 
{
public :
	ShrubberyCreationForm(std::string target); 
	~ShrubberyCreationForm(void);
    virtual void    execute(Bureaucrat const & executor);
protected :
private :
	std::string _target;
};

#endif