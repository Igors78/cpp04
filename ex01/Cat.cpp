/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:41 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 11:05:54 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat &src)
{

	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();

		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Cat const &i)
{
	o << "Type = " << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound() const
{
	std::cout << this->_type << " says meow!" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */