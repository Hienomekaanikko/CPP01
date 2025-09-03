/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:47:07 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:49:49 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	std::cout << "Making 5 zombies:\n\n";
	Zombie *Horde;
	Horde = zombieHorde(5, "Zomba");
	if (Horde == nullptr)
		return 1;
	for (int i = 0; i < 5; i++){
		std::cout << i + 1 << ": ";
		Horde[i].announce();
	}
	delete[] Horde;
	std::cout << "----------------------------------\n" << std::endl;

	std::cout << "Making 100 zombies:\n\n";
	Horde = zombieHorde(100, "Zomba");
	if (Horde == nullptr)
		return 1;
	for (int i = 0; i < 100; i++){
		std::cout << i + 1 << ": ";
		Horde[i].announce();
	}
	delete[] Horde;
	std::cout << "----------------------------------\n" << std::endl;

	std::cout << "Making 0 zombies:\n\n";
	Horde = zombieHorde(0, "Zomba");
	if (Horde == nullptr)
		return 1;
	for (int i = 0; i < 0; i++){
		std::cout << i + 1 << ": ";
		Horde[i].announce();
	}
	delete[] Horde;
	std::cout << "----------------------------------\n" << std::endl;

	std::cout << "Making negative amount of zombies:\n\n";
	Horde = zombieHorde(-10, "Zomba");
	if (Horde == nullptr)
		return 1;
	for (int i = 0; i < 0; i++){
		std::cout << i + 1 << ": ";
		Horde[i].announce();
	}
	delete[] Horde;
	std::cout << "----------------------------------\n" << std::endl;
}
