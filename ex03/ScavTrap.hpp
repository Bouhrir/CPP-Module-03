/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 23:07:20 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 16:11:21 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(string name);
		ScavTrap(ScavTrap const &Copy);
		ScavTrap &operator = (ScavTrap const &Assing);
		void guardGate();
		void attack(const std::string& target);
		~ScavTrap();
};

#endif