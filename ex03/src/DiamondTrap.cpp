/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:35 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/10 16:58:55 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//[ ClapTrap via ScavTrap ][ ScavTrap ][ ClapTrap via FragTrap ][ FragTrap ][ DiamondTrap ]
//[ ClapTrap (virtuel, unique) ][ ScavTrap ][ FragTrap ][ DiamondTrap ]

    DiamondTrap::DiamondTrap(void){
        
    }
    DiamondTrap::DiamondTrap(std::string name){
        
    }
    DiamondTrap::DiamondTrap(DiamondTrap const &src){
        
    }
    
    DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rightHandSide){
        
    }
    
    DiamondTrap::~DiamondTrap(void){
    std::cout << "Hello from DiamondTrap constructor" << std::endl;
    return;
    }


void DiamondTrap::whoAmI()
{
    std::cout << std::endl;
    std::cout << "===  FlagTrap  " << this->_name << "  ===" << std::endl;
    std::cout << "My name is: " << this->_name << std::endl;
    std::cout << "My name is: " << ClapTrap::_name << std::endl;
    std::cout << "Hi, kids, do you like violence?" << std::endl;
}
