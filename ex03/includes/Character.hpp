/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:17:34 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/23 16:18:32 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:

		Character(void);
		Character(std::string);
		Character(Character const &src);
		~Character(void);

		Character	&operator=(Character const &rhs);

		std::string const	&getName(void) const;

		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

	private:

		std::string	_name;
		AMateria	*_materias[4];
};
