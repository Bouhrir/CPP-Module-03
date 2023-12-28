/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:57:28 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 14:04:16 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap {
	private:
		string name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(string name);
		ClapTrap(ClapTrap const &Copy);
		ClapTrap &operator = (ClapTrap const &Assing);
	
		string getName() const;
		int getHitPoint() const;
		int getEnergyPoint() const;
		int getAttackDamage() const;
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif