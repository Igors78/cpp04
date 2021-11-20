/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:27:42 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 11:46:47 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &o, Animal const &i);

#endif /* ********************************************************** ANIMAL_H */