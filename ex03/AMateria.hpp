/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:48:48 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 17:11:53 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:

		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		~AMateria(void);

		AMateria	&operator=(AMateria const &rhs);

		std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:

		std::string	_type;
};
