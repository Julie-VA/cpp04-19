/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:07:54 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 17:11:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class	Cure : public AMateria
{
	public :

		Cure(void);
		Cure(Cure const &src);
		~Cure(void);

		Cure	&operator=(Cure const &rhs);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};
