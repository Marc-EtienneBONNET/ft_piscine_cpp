/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:43:42 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/08 17:45:42 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Presidential_H
#define Presidential_H
#include "AForm.hpp"
 
class PresidentialPardonForm : public AForm
{
public :
	PresidentialPardonForm(std::string target); 
	virtual ~PresidentialPardonForm(void);
    virtual void    execute(Bureaucrat const & executor);
protected :
private :
	std::string _target;
};

#endif
