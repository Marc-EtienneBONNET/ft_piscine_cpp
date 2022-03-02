/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:15:50 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/10 11:22:10 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_PHONEBOOK_H
# define H_PHONEBOOK_H
# include "../includes/my_define_include.hpp"

class PhoneBook
{
public :
	PhoneBook(void);
	~PhoneBook(void);
	void my_ajoue_contact(void);
	void my_affiche_all_contact(void) const;
private :
	Contact contact[8];
	static int nb_contact;
};

#endif