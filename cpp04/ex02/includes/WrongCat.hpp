/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:18 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:23:03 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class WrongCat : public WrongAnimal
{
public : 
	WrongCat(void);
	~WrongCat(void);
	void	printType(void);
	void	makeSound(void);
private :
};