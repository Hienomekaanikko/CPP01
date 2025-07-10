/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:06:34 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 14:44:34 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		//constructor
		Zombie();
		//deconstructor
		~Zombie();
		void announce(void);
		void setName(std::string name);
	private:
		std::string	name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
