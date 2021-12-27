/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:25:58 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/23 15:29:32 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:

		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &rhs);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);

	private:

		AMateria	*_materias[4];
};
