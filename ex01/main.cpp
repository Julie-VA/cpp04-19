/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:05:00 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/12/22 13:55:57 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		Animal	*animals[10];

		//construct animals array
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		std::cout << std::endl;

		//print some ideas
		for (int i = 0; i < 10; i++)
		{
			if (i % 2)
				std::cout << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
			else
				std::cout << ((Dog *)animals[0])->getBrain()->getIdea(i) << std::endl;
		}
		std::cout << std::endl;

		//destruc all animals
		for (int i = 0; i < 10; i++)
			delete animals[i];
		std::cout << std::endl;
	}
	{
		//deep copy
		Cat	*cat = new Cat();
		Cat	*catcpy = new Cat(*cat);
		std::cout << std::endl;
		delete cat;
		delete catcpy;
	}
	// system("leaks ex01");
	return (0);
}
