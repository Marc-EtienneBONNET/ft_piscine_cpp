/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:14 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 18:11:59 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Animal
{
public : 
	Animal(void);
	Animal(std::string Type);
	virtual ~Animal(void);
	Animal &operator=(Animal &ori);
	std::string 	getType(void);
	virtual void	printType(void);
	virtual void	makeSound(void) = 0;
protected :
	std::string type;
};