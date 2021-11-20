/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:27 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 11:05:51 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();

		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Dog const &i)
{
	o << "Type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound() const
{
	std::cout << this->_type << " says wahwh!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */