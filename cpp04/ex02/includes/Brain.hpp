/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:53:41 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 17:55:05 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Brain
{
public :
	Brain(void);
	~Brain(void);
	Brain &operator=(Brain &ori);
	std::string *getIdeas(void);
	std::string ideas[100];
protected : 
private : 
};