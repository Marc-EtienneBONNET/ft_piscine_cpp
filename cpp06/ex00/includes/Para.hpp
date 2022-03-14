/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Para.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:11:35 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/14 09:50:32 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Para
{
	public : 
		Para(char *valeur);
		Para(Para &ori);
		~Para(void);
		char	getChar(void);
		int		getInt(void);
		float	getFloat(void);
		double	getDouble(void);
		Para	&operator=(Para &ori);
		double	atoi(std::string para);
		class badPara : public std::exception
		{
			public : 
				virtual const char * what() const throw();
		};
	protected :
	private :
		char		_Char;
		int			_Int;
		float		_Float;
		double		_Double;
};