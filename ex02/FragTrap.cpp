/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:23:13 by obouhrir          #+#    #+#             */
/*   Updated: 2023/11/01 12:33:38 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){

	name = "Default";
	cout << name << ": constructor called" << endl;
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(string name){
	this->name = name;
	cout << name << ": constructor called" << endl;
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &Copy){
	*this = Copy;
}

FragTrap &FragTrap::operator = (FragTrap const &Assing){
	cout << "copy assignment operator called" << endl;	
	this->name = Assing.getname();
	this->HitPoint = Assing.getHitPoint();
	this->EnergyPoint = Assing.getEnergyPoint();
	this->AttackDamage = Assing.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap(){
	cout << "Default destructor called" << endl;
}

void FragTrap::highFivesGuys(void){
	cout << "Give me a high five! 🖐️" << endl;
}