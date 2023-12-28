/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:38:27 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 00:17:43 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	
	ClapTrap finn("boy");
	ClapTrap jack("dog");
	
	finn.takeDamage(5);
	finn.beRepaired(3);
  	finn.attack(jack.getName());
	jack.takeDamage(4);
	
	cout << finn.getHitPoint() << endl;
	cout << jack.getHitPoint() << endl;
	
  	return 0;
}