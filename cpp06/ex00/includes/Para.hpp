/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:11:35 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/28 22:20:43 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Para
{
	public : 
		Para(char *valeur);
		Para(Para &ori);
		~Para(void);
		void	takeType(void);
		void	printChar(void);
		void	printInt(void);
		void	printFloat(void);
		void	printDouble(void);
		void	myPrint(void);
		Para	&operator=(Para &ori);
		class badPara : public std::exception
		{
			public : 
				virtual const char * what() const throw();
		};
	protected :
	private :
		std::string	_inf;
		std::string	_inff;
		int			_type;
		double		_Double;
		double		_Float;
		double		_Int;
		char		_Char;
		std::string	_val;
};