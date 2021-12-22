/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:28:45 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 13:48:33 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog	&operator=(Dog const &rhs);

		void	makeSound(void) const;
		Brain	*getBrain(void) const;

	private:

		Brain	*_brain;
};
