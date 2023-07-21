/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:06:13 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/21 16:46:49 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::ifstream inputFile(av[1]);
	if (!inputFile)
	{
		std::cerr << "Erreur à l'ouverture du fichier " << av[1]<< std::endl;
		return (1);
	}
	std::ofstream outputFile((std::string(av[1]) + ".replace").c_str());
	if (!outputFile) {
		std::cerr << "Erreur à la création du fichier " << (std::string(av[1]) + ".replace").c_str() << std::endl;
		return (1);
	}
	std::string line;
	std::string s1 = av[2];
	std::string s2 = av[3];
	while (std::getline(inputFile, line))
	{
		for (unsigned int i = 0; i < line.length(); i++)
		{
			if (line[i] == s1[0])
			{
				unsigned int j = 0;
				while (line[i + j] == s1[j] && j < s1.length())
					j++;
				if (j == s1.length())
				{
					line.erase(i, j);
					line.insert(i, s2);
				}
			}
		}
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return 0;
}
