/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:25:46 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 14:01:53 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Animal
{
	public:

		Animal(void);
		Animal(Animal const &src);
		Animal(std::string type);
		virtual	~Animal(void);

		Animal	&operator=(Animal const &rhs);

		std::string		getType(void) const;
		virtual	void	makeSound(void) const = 0;

	protected:

		std::string	_type;
};
