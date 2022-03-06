/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:14 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:03:03 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Animal
{
public : 
	Animal(void);
	Animal(std::string Type);
	virtual ~Animal(void);
	Animal &operator=(Animal &ori);
	std::string getType(void);
	virtual void	printType(void);
	virtual void	makeSound(void);
protected :
	std::string type;
};