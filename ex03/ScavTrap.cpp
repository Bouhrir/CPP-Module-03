/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:01:00 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 17:18:32 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){

	name = "ScavTrap";
	cout << name << ": Default constructor called" << endl;
	EnergyPoint = 50;
}

ScavTrap::ScavTrap(string name){
	this->name = name;
	cout << name << ": constructor called" << endl;
	EnergyPoint = 50;
}

ScavTrap::ScavTrap(ScavTrap const &Copy){
	*this = Copy;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &Assing){
	cout << "copy assignment operator called" << endl;	
	this->EnergyPoint = Assing.getEnergyPoint();
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (HitPoint && EnergyPoint){
		cout << "ScavTrap " <<  name << " attacks " << target \
			 << ", causing " << AttackDamage << " points of damage!" << endl;
		EnergyPoint--;
		if (AttackDamage > 0){
			HitPoint -= AttackDamage;
			if (HitPoint <= 0)
				HitPoint = 0;
		}
		if (EnergyPoint <= 0)
			EnergyPoint = 0;
	}
}

void ScavTrap::guardGate(){
	cout << "ScavTrap '" << name << "' is now in Gate keeper mode." << endl ;
}

ScavTrap::~ScavTrap(){
	cout << "ScavTrap Default destructor called" << endl;
}