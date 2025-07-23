/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:13:31 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 13:55:52 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		void announce( void );
		~Zombie();
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );

#endif
