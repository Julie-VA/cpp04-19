/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:07:24 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/20 15:58:21 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal(std::string type);
		~WrongAnimal(void);

		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string	getType(void);
		void		makeSound(void);

	protected:

		std::string	_type;
};
