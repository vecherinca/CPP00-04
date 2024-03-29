/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mklimina <mklimina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 20:52:19 by mklimina          #+#    #+#             */
/*   Updated: 2024/02/17 14:27:28 by mklimina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int main() {
    std::cout <<
    "⬜⬜⬜⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨🟨🟨🟨⬛🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛🟨🟨🟨🟨🟧⬛⬜⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛⬛⬛⬛⬛🟧🟧⬛⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬜⬛🟨⬛⬛⬛⬛⬛🟨🟧⬛⬜⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬛🟨🟨🟨⬛⬛⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟨🟨🟨🟨🟨🟨🟨🟨🟨🟧🟧🟧⬛⬜⬜⬜⬜\n"
    "⬜⬛⬛⬛🟨🟨🟧🟨🟨🟨🟨🟨🟨🟧🟧🟧🟧🟧⬛⬛⬛⬜\n"
    "⬛🟨🟨🟨🟧🟧⬛🟨🟧🟧🟧🟧🟧🟧🟧⬛🟧🟧🟧🟧🟧⬛\n"
    "⬛🟧🟧🟧⬛⬛⬛🟨🟨🟧🟧🟧🟨🟧🟧⬛⬛⬛🟧🟧🟧⬛\n"
    "⬜⬛⬛⬛⬜⬜⬛🟨🟨🟨🟨🟨🟨🟧🟧⬛⬜⬜⬛⬛⬛⬜\n"
    "⬜⬜⬜⬜⬜⬛🟨🟨🟧🟧⬛⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟨🟨🟧🟧⬛⬜⬜⬛🟨🟨🟧🟧⬛⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬛🟧🟧🟧⬛⬜⬜⬜⬜⬛🟨🟨🟧⬛⬜⬜⬜⬜\n"
    "⬜⬜⬜⬜⬜⬛⬛⬛⬜⬜⬜⬜⬜⬜⬛⬛⬛⬜⬜⬜⬜⬜\n";
    
   std::cout << "Starting battle..." << std::endl;
    
    ClapTrap clapTrap1("Masha");
    ScavTrap scavTrap1("Misha");

    clapTrap1.attack("Misha");
    scavTrap1.takeDamage(5);

    scavTrap1.attack("Masha");
    clapTrap1.takeDamage(20);

    clapTrap1.attack("Misha");
    scavTrap1.takeDamage(6);

    scavTrap1.guardGate();

    return 0;

}
