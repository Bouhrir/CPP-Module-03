/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:53:49 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 15:18:59 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMONDTRAP_HPP
#define DIMONDTRAP_HPP

#include <iostream>
using std::string;
using std::endl;
using std::cout;

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		string name;
		int HitPoint;
		int EnergyPoint;
		int AttackDamage;
	public:
		DiamondTrap();
		DiamondTrap(string name);
		DiamondTrap(DiamondTrap const &Copy);
		DiamondTrap &operator = (DiamondTrap const &Assign);
		void attack(const std::string& target);
		void whoAmI();
		string getname() const;
		~DiamondTrap();
};




#endif