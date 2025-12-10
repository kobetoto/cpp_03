/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:00:01 by kobe              #+#    #+#             */
/*   Updated: 2025/12/10 16:45:59 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;

        ClapTrap Clap("CLAP");
        ScavTrap Scav("SCAV");
        FragTrap Frag("FRAG");
        DiamondTrap Diamond("DIAMOND");

        Clap.attack("SCAV");
        Clap.beRepaired(42);
        Clap.takeDamage(52);
        Clap.attack("SCAV");
        Clap.beRepaired(42);

        std::cout << std::endl
                  << "*********************" << std::endl;

        Scav.attack("FRAG");
        Scav.beRepaired(42);
        Scav.takeDamage(52);
        Scav.attack("FRAG");
        Scav.beRepaired(42);
        std::cout << std::endl;

        std::cout << std::endl
                  << "*********************" << std::endl;

        Frag.attack("CLAP");
        Frag.beRepaired(42);
        Frag.takeDamage(52);
        Frag.attack("CLAP");
        Frag.beRepaired(42);
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;
        FragTrap frag("FRAG");
        std::cout << std::endl;
        frag.highFivesGuys();
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << std::endl;
    std::cout << "*********************" << std::endl;
    std::cout << std::endl;
    {
        std::cout << "=====================" << std::endl;
        std::cout << "========START========" << std::endl;
        std::cout << "=====================" << std::endl;
        DiamondTrap frag("FRAG");
        std::cout << std::endl;
        frag.highFivesGuys();
        std::cout << std::endl;
    }
    std::cout << "=====================" << std::endl;
    std::cout << "=========END=========" << std::endl;
    std::cout << "=====================" << std::endl;
    return (0);
}
