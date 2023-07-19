/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:06:44 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/19 12:09:04 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}

int	main(void)
{
	// Creation d'un zombie classique
	Zombie *deadKing = newZombie("Dead king");
	deadKing->announce();

	// Creation via randomChump
	randomChump("Prince");

	// Creation de la horde
	Zombie *horde = zombieHorde(7, "Walker");
	
	//Destruction
	delete [] horde;
	delete deadKing;
}
