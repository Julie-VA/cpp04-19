/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:59:30 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 12:54:56 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas[0] = "My bowl is empty";
	this->_ideas[1] = "I want to go for a walk";
	this->_ideas[2] = "I'm hungry";
	this->_ideas[3] = "I'm thirsty";
	this->_ideas[4] = "I'm tired now";
	for (int i = 5; i < 100; i++)
		this->_ideas[i] = "I want pets";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}
