/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:21 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 16:51:05 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Dog : public Animal
{
public : 
	Dog(void);
	Dog(Dog &ori);
	~Dog(void);
	Dog &operator=(Dog &ori);
	virtual void	printType(void);
	virtual void	makeSound(void);
private :
};