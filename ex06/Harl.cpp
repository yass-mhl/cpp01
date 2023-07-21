/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:51:35 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/21 19:10:50 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	complainFunc[0] = &Harl::debug;
	complainFunc[1] = &Harl::info;
	complainFunc[2] = &Harl::warning;
	complainFunc[3] = &Harl::error;
}

Harl::~Harl()
{}

void	Harl::debug()
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info()
{
	std::cout << "INFO" << std::endl;
}

void	Harl::warning()
{
	std::cout << "WARNING" << std::endl;
}

void	Harl::error()
{
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (levels[i] == level)
			(this->*complainFunc[i])();
		i++;
	}
}

