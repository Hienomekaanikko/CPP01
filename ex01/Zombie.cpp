/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:47:51 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:11:38 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(const std::string& name) {
	this->_name = name;
}

Zombie::Zombie(){
	std::cout << "Zombie object " << _name << " created" << std::endl;
}

Zombie::Zombie(const std::string& name): _name(name){}

Zombie::~Zombie(){
	std::cout << "Zombie " << _name << " was destroyed" << std::endl;
}

void Zombie::announce(){
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
