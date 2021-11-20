/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:51 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/18 22:46:07 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Animal const &i)
{
	o << "Type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Animal::makeSound() const
{
	std::cout << this->_type << " says bhrrrr!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Animal::getType() const
{
	return (this->_type);
}
/* ************************************************************************** */