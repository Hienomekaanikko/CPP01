/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:48:00 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:57:15 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	if (N <= 0)
	{
		std::cout << "error: N must be more than 0\n" << std::endl;
		return nullptr;
	}
	Zombie* Chomps = new Zombie[N];
	for (int i = 0; i < N; i++){
		Chomps[i].setName(name);
	}
	return Chomps;
}
