/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:16:23 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 13:53:16 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// //It creates a zombie, name it, and the zombie announces itself

void randomChump(std::string name)
{
	Zombie	temp(name);
	temp.announce();
}

