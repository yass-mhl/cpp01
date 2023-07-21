/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:48:06 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/21 19:14:55 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	// Create an alias for a pointer to a member function
	
	
	public:
		Harl();
		~Harl();
		void complain(std::string level);
		typedef void (Harl::* complainPtr)(void);
		complainPtr complainFunc[4];

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};
#endif
