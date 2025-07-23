/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:17:43 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 16:44:03 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor
Weapon::Weapon(const std::string& initialType){
	this->type = initialType;
}

// Getter
const std::string& Weapon::getType() const{
	return (this->type);
}

// Setter
void Weapon::setType(const std::string& newType){
	this->type = newType;
}
