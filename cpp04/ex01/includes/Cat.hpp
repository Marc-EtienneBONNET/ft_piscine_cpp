/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:18 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/21 16:52:17 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Cat : public Animal
{
public : 
	Cat(void);
	Cat(Cat &ori);
	~Cat(void);
	Cat &operator=(Cat &ori);
	virtual void	printType(void); 
	virtual void	makeSound(void);
private :
	Brain *cerveau;
};