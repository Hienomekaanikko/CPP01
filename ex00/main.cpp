/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:27:35 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:40:12 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Testing normal zombie with name: \n\n";
	Zombie Z1 = Zombie("NormalZombie");
	Z1.announce();

	std::cout << "------------------------------------\n\n";
	std::cout << "Testing normal zombie without name: \n\n";
	Zombie Z2 = Zombie();
	Z2.announce();

	std::cout << "------------------------------------\n\n";
	std::cout << "Testing allocated zombie: \n\n";
	Zombie* Z3 = newZombie("AllocZombie");
	Z3->announce();
	delete Z3;

	std::cout << "------------------------------------\n\n";
	std::cout << "Testing randomChump: \n\n";
	randomChump("randomChump");
	std::cout << std::endl;
}
