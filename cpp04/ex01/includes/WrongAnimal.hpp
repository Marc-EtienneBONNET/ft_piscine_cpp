/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:14 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:15:28 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class WrongAnimal
{
public : 
	WrongAnimal(void);
	WrongAnimal(std::string Type);
	~WrongAnimal(void);
	WrongAnimal &operator=(WrongAnimal &ori);
	std::string 	getType(void);
	void	printType(void);
	void	makeSound(void);
protected :
	std::string type;
};