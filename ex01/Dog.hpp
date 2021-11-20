/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleinik <ioleinik@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:45:19 by ioleinik          #+#    #+#             */
/*   Updated: 2021/11/20 10:30:54 by ioleinik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{

public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog &operator=(Dog const &rhs);

	void makeSound() const;

private:
	Brain *_brain;
};

std::ostream &operator<<(std::ostream &o, Dog const &i);

#endif /* ************************************************************* DOG_H */