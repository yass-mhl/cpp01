/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 19:23:46 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/22 12:00:08 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	level(std::string str)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (levels[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}

	Harl harl;
	
	switch(level(av[1])) {
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "Invalid level" << std::endl;
	}
	return (0);
}
