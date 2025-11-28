/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:10:32 by kobe              #+#    #+#             */
/*   Updated: 2025/11/28 15:21:43 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hit_points(10), _enregy_points(10) ,_attack_damage(0){
    std::cout << "Hello from ClapTrap constructor" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _enregy_points(10) ,_attack_damage(0){
    std::cout << "Hello from ClapTrap constructor" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &src){
    std::cout << "Hello from ClapTrap cpy constr" << std::endl;
    *this = src;
    return;
}
ClapTrap::~ClapTrap(void){
    std::cout << "Hello from ClapTrap destructor" << std::endl;
    return ;
}           
                         
// ClapTrap &ClapTrap::operator=(ClapTrap const &rightHandSide){
//     std::cout << "Copy assignment operator called" << '\n';
//     *this = rightHandSide;
//     return *this;
// }