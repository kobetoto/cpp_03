/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:00:01 by kobe              #+#    #+#             */
/*   Updated: 2025/11/28 15:22:57 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main( void ){
    std::cout << "=====================" << std::endl;
    std::cout << "========START========" << std::endl;
    std::cout << "=====================" << std::endl;
    
    ClapTrap kobe("Kobe");
    return (0);
}
/*
class ClapTrap
{
public:
    ClapTrap( void );                                         //(c) CONSTR
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const &src );                          //(c) CONSTR by copy
    ~ClapTrap( void );                                        //(c) destr
    ClapTrap &operator=( ClapTrap const &rightHandSide );     //(c) operateur d'assignation (return ref on the cour.inst) =

    // void attack(const std::string& target);
    // void takeDamage(unsigned int amount);
    // void beRepaired(unsigned int amount);
    
private:
    std::string _name;
    int         _hit_points;
    int         _enregy_points;
    int         _attack_damage;  
};
*/