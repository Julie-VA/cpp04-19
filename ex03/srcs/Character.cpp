/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 17:19:58 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/23 16:18:56 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : _name("Default")
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
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_materias[i])
			delete this->_materias[i];
}

Character	&Character::operator=(Character const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
	}
	this->_name = rhs._name;
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	if (m)
	{
		while (this->_materias[i] && i < 4)
			i++;
		if (i == 4)
			return ;
		this->_materias[i] = m;
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		if (this->_materias[idx])
			this->_materias[idx] = NULL; //we should delete here to avoid leaks but subject says we can't
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->_materias[idx])
		this->_materias[idx]->use(target);
}
