/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:15:00 by kobe              #+#    #+#             */
/*   Updated: 2025/11/28 15:23:19 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
    ClapTrap( void );                                         //(c) CONSTR
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const &src );                          //(c) CONSTR by copy
    ~ClapTrap( void );                                        //(c) destr
    // ClapTrap &operator=( ClapTrap const &rightHandSide );     //(c) operateur d'assignation (return ref on the cour.inst) =

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
private:
    std::string _name;
    int         _hit_points;
    int         _enregy_points;
    int         _attack_damage;  
};

#endif // CLAPTRAP_HPP