/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:11:35 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/15 09:55:10 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Para
{
	public : 
		Para(char *valeur);
		Para(Para &ori);
		~Para(void);
		int		ifChar(char *valeur);
		int		ifNb(char *valeur);
		double	atoi(char *valeur);
		void	myPrint(void);
		Para	&operator=(Para &ori);
		class badPara : public std::exception
		{
			public : 
				virtual const char * what() const throw();
		};
	protected :
	private :
		double		_Double;
};