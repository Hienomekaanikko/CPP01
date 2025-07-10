/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:05:43 by msuokas           #+#    #+#             */
/*   Updated: 2025/07/10 14:46:48 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		zomb_amount = 5;
	Zombie	*horde = zombieHorde(zomb_amount, "Zomb");
	if (horde == NULL)
		return (0);
	for (int i = 0; i < zomb_amount; i++)
		horde[i].announce();
	delete[] (horde);

	return (0);
}
