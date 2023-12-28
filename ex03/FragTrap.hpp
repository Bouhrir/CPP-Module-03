/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:23:09 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/31 14:07:33 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap();
		FragTrap(string name);
		FragTrap(FragTrap const &Copy);
		FragTrap &operator = (FragTrap const &Assing);
		void highFivesGuys(void);
		~FragTrap();
};

#endif