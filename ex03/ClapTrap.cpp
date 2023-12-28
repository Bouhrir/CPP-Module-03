/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:05 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 17:20:20 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){

	name = "Default";
	cout << name << ": constructor called" << endl;
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(string name){
	cout << name << ": constructor called" << endl;
	this->name = name;
	HitPoint = 10;
	EnergyPoint = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &Copy){
	*this = Copy;
}

ClapTrap &ClapTrap::operator = (ClapTrap const &Assing){
	cout << "copy assignment operator called" << endl;	
	this->name = Assing.getName();
	this->HitPoint = Assing.getHitPoint();
	this->EnergyPoint = Assing.getEnergyPoint();
	this->AttackDamage = Assing.getAttackDamage();
	return *this;
}

string ClapTrap::getName() const{
	return this->name;
}

int ClapTrap::getHitPoint() const{
	return this->HitPoint;
}

int ClapTrap::getEnergyPoint() const{
	return this->EnergyPoint;
}

int ClapTrap::getAttackDamage() const{
	return this->AttackDamage;
}

void ClapTrap::attack(const std::string& target){
	if (HitPoint && EnergyPoint){
		cout << "ClapTrap " <<  name << " attacks " << target \
			 << ", causing " << AttackDamage << " points of damage!" << endl;
		EnergyPoint--;
		if (AttackDamage > 0){
			HitPoint -= AttackDamage;
			if (HitPoint == 0)
				HitPoint = 0;
		}
		if (EnergyPoint <= 0)
			EnergyPoint = 0;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoint && EnergyPoint){
		HitPoint -= amount;
		cout << name << " lose " << amount << endl;
		if (HitPoint <= 0)
			HitPoint = 0;
	}
	else
		std::cerr << name << ": Killed" << endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (HitPoint && EnergyPoint){
		HitPoint += amount;
		EnergyPoint--;
		if (EnergyPoint <= 0)
			EnergyPoint = 0;
		cout << name << ": repaired -> " << amount << " HitPoints!" << endl;
	}
	else
		std::cerr << name << ": Can't repaired" << endl;
}

ClapTrap::~ClapTrap(){
	cout << name <<": destructor called" << endl;
}