/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:17:41 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 10:50:27 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
	std::cout << "\nTest provided by the subject:\n\n";
	{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	std::cout << "-------------------------------------------------\n\n";

	std::cout << "My own tests:\n\n";
	std::cout << "Test 1:\n";
	std::cout << "Creating weapon object 'w1' with no content:\n";
	Weapon w1 = Weapon();
	std::cout << "Creating HumanA 'George' and giving him the weapon 'w1':\n";
	HumanA george("George", w1);
	george.attack();
	std::cout << "Setting weapon 'w1' with a type to actually fight with:\n";
	w1.setType("cucumber");
	george.attack();
	std::cout << "-------------------------------------------------\n\n";

	std::cout << "Test 2:\n";
	std::cout << "Creating weapon object 'tomato' with weapon type tomato:\n";
	Weapon tomato = Weapon("tomato");
	std::cout << "Creating HumanA 'Lisa' and giving him the weapon 'tomato':\n";
	HumanA lisa("Lisa", tomato);
	lisa.attack();
	std::cout << "-------------------------------------------------\n\n";

	std::cout << "Test 3:\n";
	std::cout << "Creating HumanB 'Zorro' without a weapon:\n";
	HumanB zorro("Zorro");
	zorro.attack();
	std::cout << "Giving 'Zorro' the previously created cucumber as a weapon:\n";
	zorro.setWeapon(w1);
	zorro.attack();
	std::cout << "-------------------------------------------------\n\n";
	return 0;
}
