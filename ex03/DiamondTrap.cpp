/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:53:37 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 15:24:23 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name") {
	cout << "Default DiamondTrap constructor called" << endl;
	HitPoint = FragTrap::getHitPoint();
	EnergyPoint = ScavTrap::getEnergyPoint();
	AttackDamage = FragTrap::getAttackDamage();


	cout << HitPoint << endl;
	cout << EnergyPoint << endl;
	cout << AttackDamage << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name") {
	cout << "constructor with name called" << endl;
	this->name = name;
	HitPoint = FragTrap::getHitPoint();
	EnergyPoint =  ScavTrap::getEnergyPoint();
	AttackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(DiamondTrap const &Copy){
	*this = Copy;
}

DiamondTrap &DiamondTrap::operator = (DiamondTrap const &Assign){
	cout << "copy assignment operator called" << endl;	
	this->name = Assign.getname();
	this->HitPoint = FragTrap::getHitPoint();
	this->EnergyPoint = ScavTrap::getEnergyPoint();
	this->AttackDamage = FragTrap::getAttackDamage();
	return *this;
}

string DiamondTrap::getname() const {
	return this->name;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	cout << "DiamondTrap name is : " << this->name << ", ClapTrap name is : " << ClapTrap::name << endl;
}

DiamondTrap::~DiamondTrap(){
	cout << "Default destructor called" << endl;
}

