/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:38:27 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 00:17:02 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	
	ClapTrap finn("boy");
	ClapTrap jack("dog");

	ScavTrap gunter("penguin");
	
	finn.takeDamage(5);
	finn.beRepaired(3);
  	finn.attack(jack.getName());
	jack.takeDamage(10);
	gunter.guardGate();
	cout << gunter.getAttackDamage() << endl;
  	return 0;
}