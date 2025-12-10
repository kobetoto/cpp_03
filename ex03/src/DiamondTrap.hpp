/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kobe <kobe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:30:40 by thodavid          #+#    #+#             */
/*   Updated: 2025/12/10 16:50:52 by kobe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//[ ClapTrap via ScavTrap ][ ScavTrap ][ ClapTrap via FragTrap ][ FragTrap ][ DiamondTrap ]
//[ ClapTrap (virtuel, unique) ][ ScavTrap ][ FragTrap ][ DiamondTrap ]

class DiamondTrap : public ScavTrap, public FragTrap
{
public:

    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &src);
    DiamondTrap &operator=(DiamondTrap const &rightHandSide);
    virtual ~DiamondTrap(void);

    void whoAmI();

private:
    std::string _name;
};