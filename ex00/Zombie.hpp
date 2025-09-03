/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 12:11:40 by msuokas           #+#    #+#             */
/*   Updated: 2025/08/29 14:45:30 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		const std::string _name;
	public:
		Zombie();
		~Zombie();
		Zombie(const std::string& name);
		void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif
