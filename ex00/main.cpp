/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:40:48 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/19 12:09:47 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump( std::string name );

int	main(void)
{
	Zombie *zombie = newZombie("Marco");
	zombie->announce();
	delete zombie;
	randomChump("Zombie2");
	return (0);
}
