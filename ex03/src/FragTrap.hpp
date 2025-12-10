/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:04:30 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/10 16:43:17 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    FragTrap &operator=(FragTrap const &rightHandSide);
    virtual ~FragTrap(void);

    void    highFivesGuys(void);
    void    attack(const std::string &target);
};

#endif // FLAGTRAP_HPP
