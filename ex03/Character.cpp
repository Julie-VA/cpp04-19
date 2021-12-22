/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:19:58 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 17:29:42 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default");
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

Character::Character(Character const &src) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = src._materias[i].clone();
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete _materias[i];
}

// Character	&Character::operator=(Character const &rhs)
// {
	
// }
