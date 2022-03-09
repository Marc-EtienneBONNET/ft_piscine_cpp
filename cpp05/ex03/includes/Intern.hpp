/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:53:37 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/09 17:09:21 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class Intern
{
public		:
	Intern(void);
	~Intern(void);
	Intern	&operator=(Intern &ori);
	AForm	*makeForm(std::string form_name, std::string cible);
protected	:
private		:
};