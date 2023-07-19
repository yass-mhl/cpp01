/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:20:23 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/19 12:27:33 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
