/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/10 11:19:25 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_CONTACT_H
# define MY_CONTACT_H
#include "../includes/my_define_include.hpp"

class Contact
{
public:
	
	int			id;

	void my_affichage_all(int index) const;
	void my_affichage_one(void) const;
	void my_modifi_contact(void);
	Contact(void);
	~Contact(void);

private:
	std::string	prenom;
	std::string nom;
	std::string surnom;
	std::string num;
	std::string dark_secret;
};
#endif