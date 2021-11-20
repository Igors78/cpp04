/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:13 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 10:47:50 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	Cat basic;

	Cat tmp = basic;

	int size = 4;
	Animal *tab[size];
	int k = 0;

	while (k < (size / 2))
	{
		tab[k] = new Dog();
		k++;
	}
	while (k < size)
	{
		tab[k] = new Cat();
		k++;
	}

	while (--k >= 0)
		delete tab[k];

	delete j;
	delete i;
}