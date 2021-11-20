/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:13 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 11:50:55 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

int main()
{
	const Animal *j = new Dog();

	//Animal *anim=new Animal();

	delete j;
}