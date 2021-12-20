/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:23:22 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/20 15:55:10 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		Animal	*meta = new Animal();
		Animal	*j = new Cat();
		Animal	*i = new Dog();

		std::cout << std::endl;
		std::cout << meta->getType() << std::endl;
		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		meta->makeSound();
		j->makeSound();
		i->makeSound();
		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	{
		WrongAnimal	*wmeta = new WrongAnimal();
		WrongAnimal	*wcat = new WrongCat();

		std::cout << std::endl;
		std::cout << wmeta->getType() << std::endl;
		std::cout << wcat->getType() << std::endl;
		wmeta->makeSound();
		wcat->makeSound();
		std::cout << std::endl;

		delete wmeta;
		delete wcat;
	}
}
