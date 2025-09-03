/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:17:43 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:27:16 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon() {}

Weapon::Weapon(const std::string& initialType){
	this->type = initialType;
}

const std::string& Weapon::getType() const{
	return (this->type);
}

void Weapon::setType(const std::string& newType){
	this->type = newType;
}
