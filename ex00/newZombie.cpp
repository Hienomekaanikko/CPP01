/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:16:21 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 13:53:05 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, and return it so you can use it outside of the function
// scope.

Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}
