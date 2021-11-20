/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:27:42 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/18 21:59:32 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &o, Animal const &i);

#endif /* ********************************************************** ANIMAL_H */