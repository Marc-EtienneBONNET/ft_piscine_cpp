/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:28:39 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/03 11:28:40 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int     main()
{
    ClapTrap Naruto("Naruto Uzumaki");
    ClapTrap Sasuke("Sasuke Uchiha");
    ClapTrap Sakura("Sakura Haruno");

    std::cout << std::endl << BLEU_2 << "Naruto rentre dans le combat" << BLANC << std::endl;
    Naruto.beRepaired(2);
    Naruto.attack("Pain Rikudo");
    Naruto.takeDamage(5);
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.run();
    Naruto.attack("Pain Rikudo");
    Naruto.takeDamage(7);
    std::cout << BLEU_2 << "-----etat de naruto-----" << BLANC << std::endl;
    Naruto.myPrintinfo();
    std::cout << BLEU_2 << "------------------------" << BLANC << std::endl;

        std::cout << std::endl << BLEU_2 << "Naruto rentre dans le combat" << BLANC << std::endl;
    Sasuke.beRepaired(2);
    Sasuke.attack("Pain Rikudo");
    Sasuke.takeDamage(5);
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.run();
    Sasuke.attack("Pain Rikudo");
    Sasuke.takeDamage(7);
    std::cout << BLEU_2 << "-----etat de naruto-----" << BLANC << std::endl;
    Sasuke.myPrintinfo();
    std::cout << BLEU_2 << "------------------------" << BLANC << std::endl;

        std::cout << std::endl << BLEU_2 << "Naruto rentre dans le combat" << BLANC << std::endl;
    Sakura.beRepaired(2);
    Sakura.attack("Pain Rikudo");
    Sakura.takeDamage(5);
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.run();
    Sakura.attack("Pain Rikudo");
    Sakura.takeDamage(7);
    std::cout << BLEU_2 << "-----etat de naruto-----" << BLANC << std::endl;
    Sakura.myPrintinfo();
    std::cout << BLEU_2 << "------------------------" << BLANC << std::endl;
}